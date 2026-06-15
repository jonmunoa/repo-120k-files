// fichero 6094 -- macros y constantes -- MODIFICADO
#define LIMITE_6094 6294
#define FACTOR_6094 6

int aplicar_limite6094(int valor) {
    if (valor > LIMITE_6094) return LIMITE_6094;
    return valor * FACTOR_6094;
}
