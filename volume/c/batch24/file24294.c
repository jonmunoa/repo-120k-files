// fichero 24294 -- macros y constantes -- MODIFICADO
#define LIMITE_24294 24494
#define FACTOR_24294 6

int aplicar_limite24294(int valor) {
    if (valor > LIMITE_24294) return LIMITE_24294;
    return valor * FACTOR_24294;
}
