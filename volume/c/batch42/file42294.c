// fichero 42294 -- macros y constantes -- MODIFICADO
#define LIMITE_42294 42494
#define FACTOR_42294 6

int aplicar_limite42294(int valor) {
    if (valor > LIMITE_42294) return LIMITE_42294;
    return valor * FACTOR_42294;
}
