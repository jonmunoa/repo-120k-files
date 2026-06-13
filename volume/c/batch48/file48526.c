// fichero 48526 -- macros y constantes
#define LIMITE_48526 48626
#define FACTOR_48526 2

int aplicar_limite48526(int valor) {
    if (valor > LIMITE_48526) return LIMITE_48526;
    return valor * FACTOR_48526;
}
