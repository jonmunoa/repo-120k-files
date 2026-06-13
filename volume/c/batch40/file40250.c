// fichero 40250 -- macros y constantes
#define LIMITE_40250 40350
#define FACTOR_40250 1

int aplicar_limite40250(int valor) {
    if (valor > LIMITE_40250) return LIMITE_40250;
    return valor * FACTOR_40250;
}
