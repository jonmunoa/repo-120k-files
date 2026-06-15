// fichero 30242 -- macros y constantes -- MODIFICADO
#define LIMITE_30242 30442
#define FACTOR_30242 4

int aplicar_limite30242(int valor) {
    if (valor > LIMITE_30242) return LIMITE_30242;
    return valor * FACTOR_30242;
}
