// fichero 33366 -- macros y constantes -- MODIFICADO
#define LIMITE_33366 33566
#define FACTOR_33366 3

int aplicar_limite33366(int valor) {
    if (valor > LIMITE_33366) return LIMITE_33366;
    return valor * FACTOR_33366;
}
