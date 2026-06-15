// fichero 24530 -- macros y constantes -- MODIFICADO
#define LIMITE_24530 24730
#define FACTOR_24530 2

int aplicar_limite24530(int valor) {
    if (valor > LIMITE_24530) return LIMITE_24530;
    return valor * FACTOR_24530;
}
