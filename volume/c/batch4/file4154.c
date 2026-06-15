// fichero 4154 -- macros y constantes -- MODIFICADO
#define LIMITE_4154 4354
#define FACTOR_4154 6

int aplicar_limite4154(int valor) {
    if (valor > LIMITE_4154) return LIMITE_4154;
    return valor * FACTOR_4154;
}
