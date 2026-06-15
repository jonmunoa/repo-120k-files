// fichero 33594 -- macros y constantes -- MODIFICADO
#define LIMITE_33594 33794
#define FACTOR_33594 6

int aplicar_limite33594(int valor) {
    if (valor > LIMITE_33594) return LIMITE_33594;
    return valor * FACTOR_33594;
}
