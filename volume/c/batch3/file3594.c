// fichero 3594 -- macros y constantes -- MODIFICADO
#define LIMITE_3594 3794
#define FACTOR_3594 6

int aplicar_limite3594(int valor) {
    if (valor > LIMITE_3594) return LIMITE_3594;
    return valor * FACTOR_3594;
}
