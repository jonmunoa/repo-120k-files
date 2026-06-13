// fichero 31706 -- macros y constantes
#define LIMITE_31706 31806
#define FACTOR_31706 2

int aplicar_limite31706(int valor) {
    if (valor > LIMITE_31706) return LIMITE_31706;
    return valor * FACTOR_31706;
}
