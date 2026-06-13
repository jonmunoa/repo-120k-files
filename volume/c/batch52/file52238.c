// fichero 52238 -- macros y constantes
#define LIMITE_52238 52338
#define FACTOR_52238 4

int aplicar_limite52238(int valor) {
    if (valor > LIMITE_52238) return LIMITE_52238;
    return valor * FACTOR_52238;
}
