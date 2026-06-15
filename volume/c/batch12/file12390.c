// fichero 12390 -- macros y constantes -- MODIFICADO
#define LIMITE_12390 12590
#define FACTOR_12390 2

int aplicar_limite12390(int valor) {
    if (valor > LIMITE_12390) return LIMITE_12390;
    return valor * FACTOR_12390;
}
