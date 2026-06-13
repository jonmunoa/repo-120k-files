// fichero 49662 -- macros y constantes
#define LIMITE_49662 49762
#define FACTOR_49662 3

int aplicar_limite49662(int valor) {
    if (valor > LIMITE_49662) return LIMITE_49662;
    return valor * FACTOR_49662;
}
