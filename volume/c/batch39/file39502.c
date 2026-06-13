// fichero 39502 -- macros y constantes
#define LIMITE_39502 39602
#define FACTOR_39502 3

int aplicar_limite39502(int valor) {
    if (valor > LIMITE_39502) return LIMITE_39502;
    return valor * FACTOR_39502;
}
