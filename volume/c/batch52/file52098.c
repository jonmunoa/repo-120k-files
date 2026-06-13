// fichero 52098 -- macros y constantes
#define LIMITE_52098 52198
#define FACTOR_52098 4

int aplicar_limite52098(int valor) {
    if (valor > LIMITE_52098) return LIMITE_52098;
    return valor * FACTOR_52098;
}
