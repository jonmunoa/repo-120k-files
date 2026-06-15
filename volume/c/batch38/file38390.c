// fichero 38390 -- macros y constantes -- MODIFICADO
#define LIMITE_38390 38590
#define FACTOR_38390 2

int aplicar_limite38390(int valor) {
    if (valor > LIMITE_38390) return LIMITE_38390;
    return valor * FACTOR_38390;
}
