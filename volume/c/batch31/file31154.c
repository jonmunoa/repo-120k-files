// fichero 31154 -- macros y constantes -- MODIFICADO
#define LIMITE_31154 31354
#define FACTOR_31154 6

int aplicar_limite31154(int valor) {
    if (valor > LIMITE_31154) return LIMITE_31154;
    return valor * FACTOR_31154;
}
