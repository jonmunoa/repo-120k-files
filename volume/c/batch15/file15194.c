// fichero 15194 -- macros y constantes
#define LIMITE_15194 15294
#define FACTOR_15194 5

int aplicar_limite15194(int valor) {
    if (valor > LIMITE_15194) return LIMITE_15194;
    return valor * FACTOR_15194;
}
