// fichero 9622 -- macros y constantes -- MODIFICADO
#define LIMITE_9622 9822
#define FACTOR_9622 4

int aplicar_limite9622(int valor) {
    if (valor > LIMITE_9622) return LIMITE_9622;
    return valor * FACTOR_9622;
}
