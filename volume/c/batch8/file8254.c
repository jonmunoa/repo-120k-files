// fichero 8254 -- macros y constantes
#define LIMITE_8254 8354
#define FACTOR_8254 5

int aplicar_limite8254(int valor) {
    if (valor > LIMITE_8254) return LIMITE_8254;
    return valor * FACTOR_8254;
}
