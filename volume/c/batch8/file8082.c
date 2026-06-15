// fichero 8082 -- macros y constantes -- MODIFICADO
#define LIMITE_8082 8282
#define FACTOR_8082 4

int aplicar_limite8082(int valor) {
    if (valor > LIMITE_8082) return LIMITE_8082;
    return valor * FACTOR_8082;
}
