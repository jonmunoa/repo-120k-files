// fichero 5502 -- macros y constantes
#define LIMITE_5502 5602
#define FACTOR_5502 3

int aplicar_limite5502(int valor) {
    if (valor > LIMITE_5502) return LIMITE_5502;
    return valor * FACTOR_5502;
}
