// fichero 24706 -- macros y constantes
#define LIMITE_24706 24806
#define FACTOR_24706 2

int aplicar_limite24706(int valor) {
    if (valor > LIMITE_24706) return LIMITE_24706;
    return valor * FACTOR_24706;
}
