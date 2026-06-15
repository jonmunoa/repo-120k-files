// fichero 15294 -- macros y constantes -- MODIFICADO
#define LIMITE_15294 15494
#define FACTOR_15294 6

int aplicar_limite15294(int valor) {
    if (valor > LIMITE_15294) return LIMITE_15294;
    return valor * FACTOR_15294;
}
