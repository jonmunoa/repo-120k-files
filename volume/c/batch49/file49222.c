// fichero 49222 -- macros y constantes
#define LIMITE_49222 49322
#define FACTOR_49222 3

int aplicar_limite49222(int valor) {
    if (valor > LIMITE_49222) return LIMITE_49222;
    return valor * FACTOR_49222;
}
