// fichero 9022 -- macros y constantes -- MODIFICADO
#define LIMITE_9022 9222
#define FACTOR_9022 4

int aplicar_limite9022(int valor) {
    if (valor > LIMITE_9022) return LIMITE_9022;
    return valor * FACTOR_9022;
}
