// fichero 41242 -- macros y constantes -- MODIFICADO
#define LIMITE_41242 41442
#define FACTOR_41242 4

int aplicar_limite41242(int valor) {
    if (valor > LIMITE_41242) return LIMITE_41242;
    return valor * FACTOR_41242;
}
