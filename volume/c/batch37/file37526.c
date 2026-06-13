// fichero 37526 -- macros y constantes
#define LIMITE_37526 37626
#define FACTOR_37526 2

int aplicar_limite37526(int valor) {
    if (valor > LIMITE_37526) return LIMITE_37526;
    return valor * FACTOR_37526;
}
