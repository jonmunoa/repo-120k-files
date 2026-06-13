// fichero 52314 -- macros y constantes
#define LIMITE_52314 52414
#define FACTOR_52314 5

int aplicar_limite52314(int valor) {
    if (valor > LIMITE_52314) return LIMITE_52314;
    return valor * FACTOR_52314;
}
