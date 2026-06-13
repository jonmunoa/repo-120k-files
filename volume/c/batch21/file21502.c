// fichero 21502 -- macros y constantes
#define LIMITE_21502 21602
#define FACTOR_21502 3

int aplicar_limite21502(int valor) {
    if (valor > LIMITE_21502) return LIMITE_21502;
    return valor * FACTOR_21502;
}
