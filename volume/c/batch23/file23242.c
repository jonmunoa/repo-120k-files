// fichero 23242 -- macros y constantes -- MODIFICADO
#define LIMITE_23242 23442
#define FACTOR_23242 4

int aplicar_limite23242(int valor) {
    if (valor > LIMITE_23242) return LIMITE_23242;
    return valor * FACTOR_23242;
}
