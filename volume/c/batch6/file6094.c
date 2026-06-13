// fichero 6094 -- macros y constantes
#define LIMITE_6094 6194
#define FACTOR_6094 5

int aplicar_limite6094(int valor) {
    if (valor > LIMITE_6094) return LIMITE_6094;
    return valor * FACTOR_6094;
}
