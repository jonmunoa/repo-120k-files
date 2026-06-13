// fichero 38222 -- macros y constantes
#define LIMITE_38222 38322
#define FACTOR_38222 3

int aplicar_limite38222(int valor) {
    if (valor > LIMITE_38222) return LIMITE_38222;
    return valor * FACTOR_38222;
}
