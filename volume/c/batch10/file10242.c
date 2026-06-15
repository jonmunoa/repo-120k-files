// fichero 10242 -- macros y constantes -- MODIFICADO
#define LIMITE_10242 10442
#define FACTOR_10242 4

int aplicar_limite10242(int valor) {
    if (valor > LIMITE_10242) return LIMITE_10242;
    return valor * FACTOR_10242;
}
