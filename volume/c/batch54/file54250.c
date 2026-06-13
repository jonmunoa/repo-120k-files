// fichero 54250 -- macros y constantes
#define LIMITE_54250 54350
#define FACTOR_54250 1

int aplicar_limite54250(int valor) {
    if (valor > LIMITE_54250) return LIMITE_54250;
    return valor * FACTOR_54250;
}
