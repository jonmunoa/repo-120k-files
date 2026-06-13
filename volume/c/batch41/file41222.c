// fichero 41222 -- macros y constantes
#define LIMITE_41222 41322
#define FACTOR_41222 3

int aplicar_limite41222(int valor) {
    if (valor > LIMITE_41222) return LIMITE_41222;
    return valor * FACTOR_41222;
}
