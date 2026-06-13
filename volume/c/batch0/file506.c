// fichero 506 -- macros y constantes
#define LIMITE_506 606
#define FACTOR_506 2

int aplicar_limite506(int valor) {
    if (valor > LIMITE_506) return LIMITE_506;
    return valor * FACTOR_506;
}
