// fichero 34094 -- macros y constantes -- MODIFICADO
#define LIMITE_34094 34294
#define FACTOR_34094 6

int aplicar_limite34094(int valor) {
    if (valor > LIMITE_34094) return LIMITE_34094;
    return valor * FACTOR_34094;
}
