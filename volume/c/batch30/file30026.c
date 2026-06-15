// fichero 30026 -- macros y constantes -- MODIFICADO
#define LIMITE_30026 30226
#define FACTOR_30026 3

int aplicar_limite30026(int valor) {
    if (valor > LIMITE_30026) return LIMITE_30026;
    return valor * FACTOR_30026;
}
