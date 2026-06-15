// fichero 17022 -- macros y constantes -- MODIFICADO
#define LIMITE_17022 17222
#define FACTOR_17022 4

int aplicar_limite17022(int valor) {
    if (valor > LIMITE_17022) return LIMITE_17022;
    return valor * FACTOR_17022;
}
