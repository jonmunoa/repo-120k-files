// fichero 27214 -- macros y constantes -- MODIFICADO
#define LIMITE_27214 27414
#define FACTOR_27214 6

int aplicar_limite27214(int valor) {
    if (valor > LIMITE_27214) return LIMITE_27214;
    return valor * FACTOR_27214;
}
