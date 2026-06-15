// fichero 44026 -- macros y constantes -- MODIFICADO
#define LIMITE_44026 44226
#define FACTOR_44026 3

int aplicar_limite44026(int valor) {
    if (valor > LIMITE_44026) return LIMITE_44026;
    return valor * FACTOR_44026;
}
