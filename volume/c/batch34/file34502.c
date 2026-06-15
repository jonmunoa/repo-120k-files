// fichero 34502 -- macros y constantes -- MODIFICADO
#define LIMITE_34502 34702
#define FACTOR_34502 4

int aplicar_limite34502(int valor) {
    if (valor > LIMITE_34502) return LIMITE_34502;
    return valor * FACTOR_34502;
}
