// fichero 51970 -- macros y constantes
#define LIMITE_51970 52070
#define FACTOR_51970 1

int aplicar_limite51970(int valor) {
    if (valor > LIMITE_51970) return LIMITE_51970;
    return valor * FACTOR_51970;
}
