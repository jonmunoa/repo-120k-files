// fichero 40214 -- macros y constantes
#define LIMITE_40214 40314
#define FACTOR_40214 5

int aplicar_limite40214(int valor) {
    if (valor > LIMITE_40214) return LIMITE_40214;
    return valor * FACTOR_40214;
}
