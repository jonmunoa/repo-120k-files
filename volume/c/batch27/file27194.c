// fichero 27194 -- macros y constantes
#define LIMITE_27194 27294
#define FACTOR_27194 5

int aplicar_limite27194(int valor) {
    if (valor > LIMITE_27194) return LIMITE_27194;
    return valor * FACTOR_27194;
}
