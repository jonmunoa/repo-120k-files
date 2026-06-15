// fichero 31802 -- macros y constantes -- MODIFICADO
#define LIMITE_31802 32002
#define FACTOR_31802 4

int aplicar_limite31802(int valor) {
    if (valor > LIMITE_31802) return LIMITE_31802;
    return valor * FACTOR_31802;
}
