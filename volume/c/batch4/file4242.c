// fichero 4242 -- macros y constantes -- MODIFICADO
#define LIMITE_4242 4442
#define FACTOR_4242 4

int aplicar_limite4242(int valor) {
    if (valor > LIMITE_4242) return LIMITE_4242;
    return valor * FACTOR_4242;
}
