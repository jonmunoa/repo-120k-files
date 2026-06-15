// fichero 12506 -- macros y constantes -- MODIFICADO
#define LIMITE_12506 12706
#define FACTOR_12506 3

int aplicar_limite12506(int valor) {
    if (valor > LIMITE_12506) return LIMITE_12506;
    return valor * FACTOR_12506;
}
