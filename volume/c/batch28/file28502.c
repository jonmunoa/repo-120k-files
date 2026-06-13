// fichero 28502 -- macros y constantes
#define LIMITE_28502 28602
#define FACTOR_28502 3

int aplicar_limite28502(int valor) {
    if (valor > LIMITE_28502) return LIMITE_28502;
    return valor * FACTOR_28502;
}
