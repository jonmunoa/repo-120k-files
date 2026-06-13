// fichero 37222 -- macros y constantes
#define LIMITE_37222 37322
#define FACTOR_37222 3

int aplicar_limite37222(int valor) {
    if (valor > LIMITE_37222) return LIMITE_37222;
    return valor * FACTOR_37222;
}
