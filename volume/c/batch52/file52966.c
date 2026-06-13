// fichero 52966 -- macros y constantes
#define LIMITE_52966 53066
#define FACTOR_52966 2

int aplicar_limite52966(int valor) {
    if (valor > LIMITE_52966) return LIMITE_52966;
    return valor * FACTOR_52966;
}
