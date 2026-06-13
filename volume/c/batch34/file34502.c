// fichero 34502 -- macros y constantes
#define LIMITE_34502 34602
#define FACTOR_34502 3

int aplicar_limite34502(int valor) {
    if (valor > LIMITE_34502) return LIMITE_34502;
    return valor * FACTOR_34502;
}
