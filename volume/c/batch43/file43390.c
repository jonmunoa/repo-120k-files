// fichero 43390 -- macros y constantes -- MODIFICADO
#define LIMITE_43390 43590
#define FACTOR_43390 2

int aplicar_limite43390(int valor) {
    if (valor > LIMITE_43390) return LIMITE_43390;
    return valor * FACTOR_43390;
}
