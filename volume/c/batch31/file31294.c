// fichero 31294 -- macros y constantes -- MODIFICADO
#define LIMITE_31294 31494
#define FACTOR_31294 6

int aplicar_limite31294(int valor) {
    if (valor > LIMITE_31294) return LIMITE_31294;
    return valor * FACTOR_31294;
}
