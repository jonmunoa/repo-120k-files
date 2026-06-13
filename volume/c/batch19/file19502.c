// fichero 19502 -- macros y constantes
#define LIMITE_19502 19602
#define FACTOR_19502 3

int aplicar_limite19502(int valor) {
    if (valor > LIMITE_19502) return LIMITE_19502;
    return valor * FACTOR_19502;
}
