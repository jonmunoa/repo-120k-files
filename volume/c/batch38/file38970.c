// fichero 38970 -- macros y constantes
#define LIMITE_38970 39070
#define FACTOR_38970 1

int aplicar_limite38970(int valor) {
    if (valor > LIMITE_38970) return LIMITE_38970;
    return valor * FACTOR_38970;
}
