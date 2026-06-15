// fichero 39666 -- macros y constantes -- MODIFICADO
#define LIMITE_39666 39866
#define FACTOR_39666 3

int aplicar_limite39666(int valor) {
    if (valor > LIMITE_39666) return LIMITE_39666;
    return valor * FACTOR_39666;
}
