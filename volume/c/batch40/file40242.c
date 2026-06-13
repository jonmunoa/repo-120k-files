// fichero 40242 -- macros y constantes
#define LIMITE_40242 40342
#define FACTOR_40242 3

int aplicar_limite40242(int valor) {
    if (valor > LIMITE_40242) return LIMITE_40242;
    return valor * FACTOR_40242;
}
