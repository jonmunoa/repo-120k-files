// fichero 22090 -- macros y constantes -- MODIFICADO
#define LIMITE_22090 22290
#define FACTOR_22090 2

int aplicar_limite22090(int valor) {
    if (valor > LIMITE_22090) return LIMITE_22090;
    return valor * FACTOR_22090;
}
