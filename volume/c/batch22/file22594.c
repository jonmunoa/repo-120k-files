// fichero 22594 -- macros y constantes -- MODIFICADO
#define LIMITE_22594 22794
#define FACTOR_22594 6

int aplicar_limite22594(int valor) {
    if (valor > LIMITE_22594) return LIMITE_22594;
    return valor * FACTOR_22594;
}
