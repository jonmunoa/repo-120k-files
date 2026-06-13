// fichero 12386 -- macros y constantes
#define LIMITE_12386 12486
#define FACTOR_12386 2

int aplicar_limite12386(int valor) {
    if (valor > LIMITE_12386) return LIMITE_12386;
    return valor * FACTOR_12386;
}
