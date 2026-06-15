// fichero 37306 -- macros y constantes -- MODIFICADO
#define LIMITE_37306 37506
#define FACTOR_37306 3

int aplicar_limite37306(int valor) {
    if (valor > LIMITE_37306) return LIMITE_37306;
    return valor * FACTOR_37306;
}
