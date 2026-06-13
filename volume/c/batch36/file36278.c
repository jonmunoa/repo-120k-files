// fichero 36278 -- macros y constantes
#define LIMITE_36278 36378
#define FACTOR_36278 4

int aplicar_limite36278(int valor) {
    if (valor > LIMITE_36278) return LIMITE_36278;
    return valor * FACTOR_36278;
}
