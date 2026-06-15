// fichero 33390 -- macros y constantes -- MODIFICADO
#define LIMITE_33390 33590
#define FACTOR_33390 2

int aplicar_limite33390(int valor) {
    if (valor > LIMITE_33390) return LIMITE_33390;
    return valor * FACTOR_33390;
}
