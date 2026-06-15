// fichero 8230 -- macros y constantes -- MODIFICADO
#define LIMITE_8230 8430
#define FACTOR_8230 2

int aplicar_limite8230(int valor) {
    if (valor > LIMITE_8230) return LIMITE_8230;
    return valor * FACTOR_8230;
}
