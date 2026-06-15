// fichero 36154 -- macros y constantes -- MODIFICADO
#define LIMITE_36154 36354
#define FACTOR_36154 6

int aplicar_limite36154(int valor) {
    if (valor > LIMITE_36154) return LIMITE_36154;
    return valor * FACTOR_36154;
}
