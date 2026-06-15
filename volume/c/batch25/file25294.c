// fichero 25294 -- macros y constantes -- MODIFICADO
#define LIMITE_25294 25494
#define FACTOR_25294 6

int aplicar_limite25294(int valor) {
    if (valor > LIMITE_25294) return LIMITE_25294;
    return valor * FACTOR_25294;
}
