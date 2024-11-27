import java.util.ArrayList;
import java.util.List;

public class NoPairsAllowed {
    public static List<Integer> noPairs(List<String> words) {
        List<Integer> result = new ArrayList<>();

        for (String word : words) {
            int count = 0;
            for (int   
 i = 0; i < word.length() - 1; i++) {
                if (word.charAt(i) == word.charAt(i + 1)) {
                    count++;
                    i++;
                }
            }
            result.add(count);
        }

        return result;
    }
}
