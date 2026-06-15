// fichero 5094 -- macros y constantes -- MODIFICADO
#define LIMITE_5094 5294
#define FACTOR_5094 6

int aplicar_limite5094(int valor) {
    if (valor > LIMITE_5094) return LIMITE_5094;
    return valor * FACTOR_5094;
}
