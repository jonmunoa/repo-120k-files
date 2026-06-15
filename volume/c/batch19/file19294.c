// fichero 19294 -- macros y constantes -- MODIFICADO
#define LIMITE_19294 19494
#define FACTOR_19294 6

int aplicar_limite19294(int valor) {
    if (valor > LIMITE_19294) return LIMITE_19294;
    return valor * FACTOR_19294;
}
