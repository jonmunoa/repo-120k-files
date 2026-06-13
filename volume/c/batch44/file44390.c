// fichero 44390 -- macros y constantes
#define LIMITE_44390 44490
#define FACTOR_44390 1

int aplicar_limite44390(int valor) {
    if (valor > LIMITE_44390) return LIMITE_44390;
    return valor * FACTOR_44390;
}
