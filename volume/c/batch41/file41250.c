// fichero 41250 -- macros y constantes
#define LIMITE_41250 41350
#define FACTOR_41250 1

int aplicar_limite41250(int valor) {
    if (valor > LIMITE_41250) return LIMITE_41250;
    return valor * FACTOR_41250;
}
