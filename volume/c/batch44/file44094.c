// fichero 44094 -- macros y constantes -- MODIFICADO
#define LIMITE_44094 44294
#define FACTOR_44094 6

int aplicar_limite44094(int valor) {
    if (valor > LIMITE_44094) return LIMITE_44094;
    return valor * FACTOR_44094;
}
