// fichero 5022 -- macros y constantes -- MODIFICADO
#define LIMITE_5022 5222
#define FACTOR_5022 4

int aplicar_limite5022(int valor) {
    if (valor > LIMITE_5022) return LIMITE_5022;
    return valor * FACTOR_5022;
}
