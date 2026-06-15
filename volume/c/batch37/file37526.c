// fichero 37526 -- macros y constantes -- MODIFICADO
#define LIMITE_37526 37726
#define FACTOR_37526 3

int aplicar_limite37526(int valor) {
    if (valor > LIMITE_37526) return LIMITE_37526;
    return valor * FACTOR_37526;
}
