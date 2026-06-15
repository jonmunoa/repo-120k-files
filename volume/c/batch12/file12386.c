// fichero 12386 -- macros y constantes -- MODIFICADO
#define LIMITE_12386 12586
#define FACTOR_12386 3

int aplicar_limite12386(int valor) {
    if (valor > LIMITE_12386) return LIMITE_12386;
    return valor * FACTOR_12386;
}
