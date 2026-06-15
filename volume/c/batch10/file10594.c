// fichero 10594 -- macros y constantes -- MODIFICADO
#define LIMITE_10594 10794
#define FACTOR_10594 6

int aplicar_limite10594(int valor) {
    if (valor > LIMITE_10594) return LIMITE_10594;
    return valor * FACTOR_10594;
}
