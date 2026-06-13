// fichero 48278 -- macros y constantes
#define LIMITE_48278 48378
#define FACTOR_48278 4

int aplicar_limite48278(int valor) {
    if (valor > LIMITE_48278) return LIMITE_48278;
    return valor * FACTOR_48278;
}
