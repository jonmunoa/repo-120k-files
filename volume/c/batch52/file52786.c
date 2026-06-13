// fichero 52786 -- macros y constantes
#define LIMITE_52786 52886
#define FACTOR_52786 2

int aplicar_limite52786(int valor) {
    if (valor > LIMITE_52786) return LIMITE_52786;
    return valor * FACTOR_52786;
}
