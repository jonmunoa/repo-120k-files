// fichero 41022 -- macros y constantes
#define LIMITE_41022 41122
#define FACTOR_41022 3

int aplicar_limite41022(int valor) {
    if (valor > LIMITE_41022) return LIMITE_41022;
    return valor * FACTOR_41022;
}
