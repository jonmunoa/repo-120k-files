// fichero 22082 -- macros y constantes -- MODIFICADO
#define LIMITE_22082 22282
#define FACTOR_22082 4

int aplicar_limite22082(int valor) {
    if (valor > LIMITE_22082) return LIMITE_22082;
    return valor * FACTOR_22082;
}
