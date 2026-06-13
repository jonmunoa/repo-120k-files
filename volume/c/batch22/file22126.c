// fichero 22126 -- macros y constantes
#define LIMITE_22126 22226
#define FACTOR_22126 2

int aplicar_limite22126(int valor) {
    if (valor > LIMITE_22126) return LIMITE_22126;
    return valor * FACTOR_22126;
}
