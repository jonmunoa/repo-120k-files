// fichero 4082 -- macros y constantes -- MODIFICADO
#define LIMITE_4082 4282
#define FACTOR_4082 4

int aplicar_limite4082(int valor) {
    if (valor > LIMITE_4082) return LIMITE_4082;
    return valor * FACTOR_4082;
}
