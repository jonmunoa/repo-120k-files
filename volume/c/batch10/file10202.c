// fichero 10202 -- macros y constantes -- MODIFICADO
#define LIMITE_10202 10402
#define FACTOR_10202 4

int aplicar_limite10202(int valor) {
    if (valor > LIMITE_10202) return LIMITE_10202;
    return valor * FACTOR_10202;
}
