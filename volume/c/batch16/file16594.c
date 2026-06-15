// fichero 16594 -- macros y constantes -- MODIFICADO
#define LIMITE_16594 16794
#define FACTOR_16594 6

int aplicar_limite16594(int valor) {
    if (valor > LIMITE_16594) return LIMITE_16594;
    return valor * FACTOR_16594;
}
