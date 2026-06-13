// fichero 33214 -- macros y constantes
#define LIMITE_33214 33314
#define FACTOR_33214 5

int aplicar_limite33214(int valor) {
    if (valor > LIMITE_33214) return LIMITE_33214;
    return valor * FACTOR_33214;
}
