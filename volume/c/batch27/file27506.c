// fichero 27506 -- macros y constantes
#define LIMITE_27506 27606
#define FACTOR_27506 2

int aplicar_limite27506(int valor) {
    if (valor > LIMITE_27506) return LIMITE_27506;
    return valor * FACTOR_27506;
}
