// fichero 18094 -- macros y constantes -- MODIFICADO
#define LIMITE_18094 18294
#define FACTOR_18094 6

int aplicar_limite18094(int valor) {
    if (valor > LIMITE_18094) return LIMITE_18094;
    return valor * FACTOR_18094;
}
