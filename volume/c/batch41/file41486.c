// fichero 41486 -- macros y constantes -- MODIFICADO
#define LIMITE_41486 41686
#define FACTOR_41486 3

int aplicar_limite41486(int valor) {
    if (valor > LIMITE_41486) return LIMITE_41486;
    return valor * FACTOR_41486;
}
