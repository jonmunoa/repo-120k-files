// fichero 49294 -- macros y constantes -- MODIFICADO
#define LIMITE_49294 49494
#define FACTOR_49294 6

int aplicar_limite49294(int valor) {
    if (valor > LIMITE_49294) return LIMITE_49294;
    return valor * FACTOR_49294;
}
