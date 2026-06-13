// fichero 46210 -- macros y constantes
#define LIMITE_46210 46310
#define FACTOR_46210 1

int aplicar_limite46210(int valor) {
    if (valor > LIMITE_46210) return LIMITE_46210;
    return valor * FACTOR_46210;
}
