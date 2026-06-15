// fichero 49022 -- macros y constantes -- MODIFICADO
#define LIMITE_49022 49222
#define FACTOR_49022 4

int aplicar_limite49022(int valor) {
    if (valor > LIMITE_49022) return LIMITE_49022;
    return valor * FACTOR_49022;
}
