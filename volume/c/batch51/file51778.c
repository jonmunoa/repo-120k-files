// fichero 51778 -- macros y constantes
#define LIMITE_51778 51878
#define FACTOR_51778 4

int aplicar_limite51778(int valor) {
    if (valor > LIMITE_51778) return LIMITE_51778;
    return valor * FACTOR_51778;
}
