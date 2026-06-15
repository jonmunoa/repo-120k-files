// fichero 48094 -- macros y constantes -- MODIFICADO
#define LIMITE_48094 48294
#define FACTOR_48094 6

int aplicar_limite48094(int valor) {
    if (valor > LIMITE_48094) return LIMITE_48094;
    return valor * FACTOR_48094;
}
