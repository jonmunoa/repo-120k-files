// fichero 35022 -- macros y constantes
#define LIMITE_35022 35122
#define FACTOR_35022 3

int aplicar_limite35022(int valor) {
    if (valor > LIMITE_35022) return LIMITE_35022;
    return valor * FACTOR_35022;
}
