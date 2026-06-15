// fichero 39154 -- macros y constantes -- MODIFICADO
#define LIMITE_39154 39354
#define FACTOR_39154 6

int aplicar_limite39154(int valor) {
    if (valor > LIMITE_39154) return LIMITE_39154;
    return valor * FACTOR_39154;
}
