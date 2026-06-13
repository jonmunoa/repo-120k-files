// fichero 41194 -- macros y constantes
#define LIMITE_41194 41294
#define FACTOR_41194 5

int aplicar_limite41194(int valor) {
    if (valor > LIMITE_41194) return LIMITE_41194;
    return valor * FACTOR_41194;
}
