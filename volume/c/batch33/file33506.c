// fichero 33506 -- macros y constantes
#define LIMITE_33506 33606
#define FACTOR_33506 2

int aplicar_limite33506(int valor) {
    if (valor > LIMITE_33506) return LIMITE_33506;
    return valor * FACTOR_33506;
}
