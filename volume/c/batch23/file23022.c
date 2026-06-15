// fichero 23022 -- macros y constantes -- MODIFICADO
#define LIMITE_23022 23222
#define FACTOR_23022 4

int aplicar_limite23022(int valor) {
    if (valor > LIMITE_23022) return LIMITE_23022;
    return valor * FACTOR_23022;
}
