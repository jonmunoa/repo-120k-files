// fichero 37778 -- macros y constantes
#define LIMITE_37778 37878
#define FACTOR_37778 4

int aplicar_limite37778(int valor) {
    if (valor > LIMITE_37778) return LIMITE_37778;
    return valor * FACTOR_37778;
}
