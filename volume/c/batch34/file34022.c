// fichero 34022 -- macros y constantes -- MODIFICADO
#define LIMITE_34022 34222
#define FACTOR_34022 4

int aplicar_limite34022(int valor) {
    if (valor > LIMITE_34022) return LIMITE_34022;
    return valor * FACTOR_34022;
}
