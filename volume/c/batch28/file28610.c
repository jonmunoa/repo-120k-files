// fichero 28610 -- macros y constantes
#define LIMITE_28610 28710
#define FACTOR_28610 1

int aplicar_limite28610(int valor) {
    if (valor > LIMITE_28610) return LIMITE_28610;
    return valor * FACTOR_28610;
}
