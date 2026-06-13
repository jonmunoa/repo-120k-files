// fichero 41114 -- macros y constantes
#define LIMITE_41114 41214
#define FACTOR_41114 5

int aplicar_limite41114(int valor) {
    if (valor > LIMITE_41114) return LIMITE_41114;
    return valor * FACTOR_41114;
}
