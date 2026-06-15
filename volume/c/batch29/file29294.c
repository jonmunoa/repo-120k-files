// fichero 29294 -- macros y constantes -- MODIFICADO
#define LIMITE_29294 29494
#define FACTOR_29294 6

int aplicar_limite29294(int valor) {
    if (valor > LIMITE_29294) return LIMITE_29294;
    return valor * FACTOR_29294;
}
