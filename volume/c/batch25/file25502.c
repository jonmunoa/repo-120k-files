// fichero 25502 -- macros y constantes
#define LIMITE_25502 25602
#define FACTOR_25502 3

int aplicar_limite25502(int valor) {
    if (valor > LIMITE_25502) return LIMITE_25502;
    return valor * FACTOR_25502;
}
