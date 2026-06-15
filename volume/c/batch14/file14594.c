// fichero 14594 -- macros y constantes -- MODIFICADO
#define LIMITE_14594 14794
#define FACTOR_14594 6

int aplicar_limite14594(int valor) {
    if (valor > LIMITE_14594) return LIMITE_14594;
    return valor * FACTOR_14594;
}
