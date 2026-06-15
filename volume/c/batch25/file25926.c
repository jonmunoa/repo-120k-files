// fichero 25926 -- macros y constantes -- MODIFICADO
#define LIMITE_25926 26126
#define FACTOR_25926 3

int aplicar_limite25926(int valor) {
    if (valor > LIMITE_25926) return LIMITE_25926;
    return valor * FACTOR_25926;
}
