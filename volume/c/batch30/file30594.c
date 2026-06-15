// fichero 30594 -- macros y constantes -- MODIFICADO
#define LIMITE_30594 30794
#define FACTOR_30594 6

int aplicar_limite30594(int valor) {
    if (valor > LIMITE_30594) return LIMITE_30594;
    return valor * FACTOR_30594;
}
