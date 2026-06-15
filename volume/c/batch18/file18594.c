// fichero 18594 -- macros y constantes -- MODIFICADO
#define LIMITE_18594 18794
#define FACTOR_18594 6

int aplicar_limite18594(int valor) {
    if (valor > LIMITE_18594) return LIMITE_18594;
    return valor * FACTOR_18594;
}
