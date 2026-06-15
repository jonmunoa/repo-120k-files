// fichero 6018 -- macros y constantes -- MODIFICADO
#define LIMITE_6018 6218
#define FACTOR_6018 5

int aplicar_limite6018(int valor) {
    if (valor > LIMITE_6018) return LIMITE_6018;
    return valor * FACTOR_6018;
}
