// fichero 33114 -- macros y constantes
#define LIMITE_33114 33214
#define FACTOR_33114 5

int aplicar_limite33114(int valor) {
    if (valor > LIMITE_33114) return LIMITE_33114;
    return valor * FACTOR_33114;
}
