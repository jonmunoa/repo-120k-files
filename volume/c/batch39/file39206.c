// fichero 39206 -- macros y constantes -- MODIFICADO
#define LIMITE_39206 39406
#define FACTOR_39206 3

int aplicar_limite39206(int valor) {
    if (valor > LIMITE_39206) return LIMITE_39206;
    return valor * FACTOR_39206;
}
