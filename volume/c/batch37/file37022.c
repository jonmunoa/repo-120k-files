// fichero 37022 -- macros y constantes
#define LIMITE_37022 37122
#define FACTOR_37022 3

int aplicar_limite37022(int valor) {
    if (valor > LIMITE_37022) return LIMITE_37022;
    return valor * FACTOR_37022;
}
