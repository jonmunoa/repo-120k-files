// fichero 28594 -- macros y constantes
#define LIMITE_28594 28694
#define FACTOR_28594 5

int aplicar_limite28594(int valor) {
    if (valor > LIMITE_28594) return LIMITE_28594;
    return valor * FACTOR_28594;
}
