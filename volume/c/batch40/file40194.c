// fichero 40194 -- macros y constantes
#define LIMITE_40194 40294
#define FACTOR_40194 5

int aplicar_limite40194(int valor) {
    if (valor > LIMITE_40194) return LIMITE_40194;
    return valor * FACTOR_40194;
}
