// fichero 52214 -- macros y constantes
#define LIMITE_52214 52314
#define FACTOR_52214 5

int aplicar_limite52214(int valor) {
    if (valor > LIMITE_52214) return LIMITE_52214;
    return valor * FACTOR_52214;
}
