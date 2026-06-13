// fichero 25250 -- macros y constantes
#define LIMITE_25250 25350
#define FACTOR_25250 1

int aplicar_limite25250(int valor) {
    if (valor > LIMITE_25250) return LIMITE_25250;
    return valor * FACTOR_25250;
}
