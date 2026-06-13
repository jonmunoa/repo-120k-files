// fichero 48154 -- macros y constantes
#define LIMITE_48154 48254
#define FACTOR_48154 5

int aplicar_limite48154(int valor) {
    if (valor > LIMITE_48154) return LIMITE_48154;
    return valor * FACTOR_48154;
}
