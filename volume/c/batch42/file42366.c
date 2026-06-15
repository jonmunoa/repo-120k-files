// fichero 42366 -- macros y constantes -- MODIFICADO
#define LIMITE_42366 42566
#define FACTOR_42366 3

int aplicar_limite42366(int valor) {
    if (valor > LIMITE_42366) return LIMITE_42366;
    return valor * FACTOR_42366;
}
