// fichero 33650 -- macros y constantes
#define LIMITE_33650 33750
#define FACTOR_33650 1

int aplicar_limite33650(int valor) {
    if (valor > LIMITE_33650) return LIMITE_33650;
    return valor * FACTOR_33650;
}
