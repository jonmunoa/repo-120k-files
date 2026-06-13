// fichero 37306 -- macros y constantes
#define LIMITE_37306 37406
#define FACTOR_37306 2

int aplicar_limite37306(int valor) {
    if (valor > LIMITE_37306) return LIMITE_37306;
    return valor * FACTOR_37306;
}
