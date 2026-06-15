// fichero 45242 -- macros y constantes -- MODIFICADO
#define LIMITE_45242 45442
#define FACTOR_45242 4

int aplicar_limite45242(int valor) {
    if (valor > LIMITE_45242) return LIMITE_45242;
    return valor * FACTOR_45242;
}
