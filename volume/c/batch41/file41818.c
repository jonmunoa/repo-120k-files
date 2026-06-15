// fichero 41818 -- macros y constantes -- MODIFICADO
#define LIMITE_41818 42018
#define FACTOR_41818 5

int aplicar_limite41818(int valor) {
    if (valor > LIMITE_41818) return LIMITE_41818;
    return valor * FACTOR_41818;
}
