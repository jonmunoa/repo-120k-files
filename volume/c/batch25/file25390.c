// fichero 25390 -- macros y constantes -- MODIFICADO
#define LIMITE_25390 25590
#define FACTOR_25390 2

int aplicar_limite25390(int valor) {
    if (valor > LIMITE_25390) return LIMITE_25390;
    return valor * FACTOR_25390;
}
