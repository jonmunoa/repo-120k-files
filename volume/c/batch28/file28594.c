// fichero 28594 -- macros y constantes -- MODIFICADO
#define LIMITE_28594 28794
#define FACTOR_28594 6

int aplicar_limite28594(int valor) {
    if (valor > LIMITE_28594) return LIMITE_28594;
    return valor * FACTOR_28594;
}
