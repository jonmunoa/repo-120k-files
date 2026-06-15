// fichero 6390 -- macros y constantes -- MODIFICADO
#define LIMITE_6390 6590
#define FACTOR_6390 2

int aplicar_limite6390(int valor) {
    if (valor > LIMITE_6390) return LIMITE_6390;
    return valor * FACTOR_6390;
}
