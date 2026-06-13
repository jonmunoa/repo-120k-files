// fichero 35614 -- macros y constantes
#define LIMITE_35614 35714
#define FACTOR_35614 5

int aplicar_limite35614(int valor) {
    if (valor > LIMITE_35614) return LIMITE_35614;
    return valor * FACTOR_35614;
}
