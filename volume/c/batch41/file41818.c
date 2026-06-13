// fichero 41818 -- macros y constantes
#define LIMITE_41818 41918
#define FACTOR_41818 4

int aplicar_limite41818(int valor) {
    if (valor > LIMITE_41818) return LIMITE_41818;
    return valor * FACTOR_41818;
}
