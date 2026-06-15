// fichero 4022 -- macros y constantes -- MODIFICADO
#define LIMITE_4022 4222
#define FACTOR_4022 4

int aplicar_limite4022(int valor) {
    if (valor > LIMITE_4022) return LIMITE_4022;
    return valor * FACTOR_4022;
}
