// fichero 44390 -- macros y constantes -- MODIFICADO
#define LIMITE_44390 44590
#define FACTOR_44390 2

int aplicar_limite44390(int valor) {
    if (valor > LIMITE_44390) return LIMITE_44390;
    return valor * FACTOR_44390;
}
