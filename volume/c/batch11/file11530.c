// fichero 11530 -- macros y constantes
#define LIMITE_11530 11630
#define FACTOR_11530 1

int aplicar_limite11530(int valor) {
    if (valor > LIMITE_11530) return LIMITE_11530;
    return valor * FACTOR_11530;
}
