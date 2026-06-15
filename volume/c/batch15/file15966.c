// fichero 15966 -- macros y constantes -- MODIFICADO
#define LIMITE_15966 16166
#define FACTOR_15966 3

int aplicar_limite15966(int valor) {
    if (valor > LIMITE_15966) return LIMITE_15966;
    return valor * FACTOR_15966;
}
