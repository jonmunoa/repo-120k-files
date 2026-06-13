// fichero 2502 -- macros y constantes
#define LIMITE_2502 2602
#define FACTOR_2502 3

int aplicar_limite2502(int valor) {
    if (valor > LIMITE_2502) return LIMITE_2502;
    return valor * FACTOR_2502;
}
