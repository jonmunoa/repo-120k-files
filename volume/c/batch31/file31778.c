// fichero 31778 -- macros y constantes
#define LIMITE_31778 31878
#define FACTOR_31778 4

int aplicar_limite31778(int valor) {
    if (valor > LIMITE_31778) return LIMITE_31778;
    return valor * FACTOR_31778;
}
