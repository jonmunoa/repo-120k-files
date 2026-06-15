// fichero 39222 -- macros y constantes -- MODIFICADO
#define LIMITE_39222 39422
#define FACTOR_39222 4

int aplicar_limite39222(int valor) {
    if (valor > LIMITE_39222) return LIMITE_39222;
    return valor * FACTOR_39222;
}
