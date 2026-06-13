// fichero 33254 -- macros y constantes
#define LIMITE_33254 33354
#define FACTOR_33254 5

int aplicar_limite33254(int valor) {
    if (valor > LIMITE_33254) return LIMITE_33254;
    return valor * FACTOR_33254;
}
