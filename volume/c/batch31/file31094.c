// fichero 31094 -- macros y constantes -- MODIFICADO
#define LIMITE_31094 31294
#define FACTOR_31094 6

int aplicar_limite31094(int valor) {
    if (valor > LIMITE_31094) return LIMITE_31094;
    return valor * FACTOR_31094;
}
