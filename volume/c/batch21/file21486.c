// fichero 21486 -- macros y constantes -- MODIFICADO
#define LIMITE_21486 21686
#define FACTOR_21486 3

int aplicar_limite21486(int valor) {
    if (valor > LIMITE_21486) return LIMITE_21486;
    return valor * FACTOR_21486;
}
