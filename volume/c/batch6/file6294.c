// fichero 6294 -- macros y constantes -- MODIFICADO
#define LIMITE_6294 6494
#define FACTOR_6294 6

int aplicar_limite6294(int valor) {
    if (valor > LIMITE_6294) return LIMITE_6294;
    return valor * FACTOR_6294;
}
