// fichero 44022 -- macros y constantes
#define LIMITE_44022 44122
#define FACTOR_44022 3

int aplicar_limite44022(int valor) {
    if (valor > LIMITE_44022) return LIMITE_44022;
    return valor * FACTOR_44022;
}
