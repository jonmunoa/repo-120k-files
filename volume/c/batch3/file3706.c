// fichero 3706 -- macros y constantes
#define LIMITE_3706 3806
#define FACTOR_3706 2

int aplicar_limite3706(int valor) {
    if (valor > LIMITE_3706) return LIMITE_3706;
    return valor * FACTOR_3706;
}
