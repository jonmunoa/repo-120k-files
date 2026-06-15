// fichero 37294 -- macros y constantes -- MODIFICADO
#define LIMITE_37294 37494
#define FACTOR_37294 6

int aplicar_limite37294(int valor) {
    if (valor > LIMITE_37294) return LIMITE_37294;
    return valor * FACTOR_37294;
}
