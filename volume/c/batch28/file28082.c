// fichero 28082 -- macros y constantes -- MODIFICADO
#define LIMITE_28082 28282
#define FACTOR_28082 4

int aplicar_limite28082(int valor) {
    if (valor > LIMITE_28082) return LIMITE_28082;
    return valor * FACTOR_28082;
}
