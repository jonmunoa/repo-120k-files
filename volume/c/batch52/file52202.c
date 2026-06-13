// fichero 52202 -- macros y constantes
#define LIMITE_52202 52302
#define FACTOR_52202 3

int aplicar_limite52202(int valor) {
    if (valor > LIMITE_52202) return LIMITE_52202;
    return valor * FACTOR_52202;
}
