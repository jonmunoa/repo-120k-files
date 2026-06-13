// fichero 40094 -- macros y constantes
#define LIMITE_40094 40194
#define FACTOR_40094 5

int aplicar_limite40094(int valor) {
    if (valor > LIMITE_40094) return LIMITE_40094;
    return valor * FACTOR_40094;
}
