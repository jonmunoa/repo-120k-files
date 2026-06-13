// fichero 37094 -- macros y constantes
#define LIMITE_37094 37194
#define FACTOR_37094 5

int aplicar_limite37094(int valor) {
    if (valor > LIMITE_37094) return LIMITE_37094;
    return valor * FACTOR_37094;
}
