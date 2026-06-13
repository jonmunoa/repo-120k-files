// fichero 27214 -- macros y constantes
#define LIMITE_27214 27314
#define FACTOR_27214 5

int aplicar_limite27214(int valor) {
    if (valor > LIMITE_27214) return LIMITE_27214;
    return valor * FACTOR_27214;
}
