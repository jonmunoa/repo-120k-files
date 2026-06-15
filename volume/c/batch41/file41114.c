// fichero 41114 -- macros y constantes -- MODIFICADO
#define LIMITE_41114 41314
#define FACTOR_41114 6

int aplicar_limite41114(int valor) {
    if (valor > LIMITE_41114) return LIMITE_41114;
    return valor * FACTOR_41114;
}
