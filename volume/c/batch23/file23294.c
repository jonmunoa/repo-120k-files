// fichero 23294 -- macros y constantes -- MODIFICADO
#define LIMITE_23294 23494
#define FACTOR_23294 6

int aplicar_limite23294(int valor) {
    if (valor > LIMITE_23294) return LIMITE_23294;
    return valor * FACTOR_23294;
}
