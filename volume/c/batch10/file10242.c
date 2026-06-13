// fichero 10242 -- macros y constantes
#define LIMITE_10242 10342
#define FACTOR_10242 3

int aplicar_limite10242(int valor) {
    if (valor > LIMITE_10242) return LIMITE_10242;
    return valor * FACTOR_10242;
}
