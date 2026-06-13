// fichero 33014 -- macros y constantes
#define LIMITE_33014 33114
#define FACTOR_33014 5

int aplicar_limite33014(int valor) {
    if (valor > LIMITE_33014) return LIMITE_33014;
    return valor * FACTOR_33014;
}
