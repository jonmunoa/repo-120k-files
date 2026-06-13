// fichero 6022 -- macros y constantes
#define LIMITE_6022 6122
#define FACTOR_6022 3

int aplicar_limite6022(int valor) {
    if (valor > LIMITE_6022) return LIMITE_6022;
    return valor * FACTOR_6022;
}
