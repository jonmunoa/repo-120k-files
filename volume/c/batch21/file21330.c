// fichero 21330 -- macros y constantes -- MODIFICADO
#define LIMITE_21330 21530
#define FACTOR_21330 2

int aplicar_limite21330(int valor) {
    if (valor > LIMITE_21330) return LIMITE_21330;
    return valor * FACTOR_21330;
}
