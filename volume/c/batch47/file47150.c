// fichero 47150 -- macros y constantes
#define LIMITE_47150 47250
#define FACTOR_47150 1

int aplicar_limite47150(int valor) {
    if (valor > LIMITE_47150) return LIMITE_47150;
    return valor * FACTOR_47150;
}
