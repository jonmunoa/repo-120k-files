// fichero 38022 -- macros y constantes -- MODIFICADO
#define LIMITE_38022 38222
#define FACTOR_38022 4

int aplicar_limite38022(int valor) {
    if (valor > LIMITE_38022) return LIMITE_38022;
    return valor * FACTOR_38022;
}
