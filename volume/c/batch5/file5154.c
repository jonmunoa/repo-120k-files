// fichero 5154 -- macros y constantes -- MODIFICADO
#define LIMITE_5154 5354
#define FACTOR_5154 6

int aplicar_limite5154(int valor) {
    if (valor > LIMITE_5154) return LIMITE_5154;
    return valor * FACTOR_5154;
}
