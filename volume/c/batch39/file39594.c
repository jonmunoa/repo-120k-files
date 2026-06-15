// fichero 39594 -- macros y constantes -- MODIFICADO
#define LIMITE_39594 39794
#define FACTOR_39594 6

int aplicar_limite39594(int valor) {
    if (valor > LIMITE_39594) return LIMITE_39594;
    return valor * FACTOR_39594;
}
