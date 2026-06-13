// fichero 38706 -- macros y constantes
#define LIMITE_38706 38806
#define FACTOR_38706 2

int aplicar_limite38706(int valor) {
    if (valor > LIMITE_38706) return LIMITE_38706;
    return valor * FACTOR_38706;
}
