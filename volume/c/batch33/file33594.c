// fichero 33594 -- macros y constantes
#define LIMITE_33594 33694
#define FACTOR_33594 5

int aplicar_limite33594(int valor) {
    if (valor > LIMITE_33594) return LIMITE_33594;
    return valor * FACTOR_33594;
}
