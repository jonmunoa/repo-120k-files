// fichero 37022 -- macros y constantes -- MODIFICADO
#define LIMITE_37022 37222
#define FACTOR_37022 4

int aplicar_limite37022(int valor) {
    if (valor > LIMITE_37022) return LIMITE_37022;
    return valor * FACTOR_37022;
}
