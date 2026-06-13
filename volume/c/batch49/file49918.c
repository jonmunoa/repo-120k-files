// fichero 49918 -- macros y constantes
#define LIMITE_49918 50018
#define FACTOR_49918 4

int aplicar_limite49918(int valor) {
    if (valor > LIMITE_49918) return LIMITE_49918;
    return valor * FACTOR_49918;
}
