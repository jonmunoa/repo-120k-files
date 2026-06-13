// fichero 37330 -- macros y constantes
#define LIMITE_37330 37430
#define FACTOR_37330 1

int aplicar_limite37330(int valor) {
    if (valor > LIMITE_37330) return LIMITE_37330;
    return valor * FACTOR_37330;
}
