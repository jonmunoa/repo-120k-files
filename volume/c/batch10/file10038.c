// fichero 10038 -- macros y constantes -- MODIFICADO
#define LIMITE_10038 10238
#define FACTOR_10038 5

int aplicar_limite10038(int valor) {
    if (valor > LIMITE_10038) return LIMITE_10038;
    return valor * FACTOR_10038;
}
