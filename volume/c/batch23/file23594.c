// fichero 23594 -- macros y constantes -- MODIFICADO
#define LIMITE_23594 23794
#define FACTOR_23594 6

int aplicar_limite23594(int valor) {
    if (valor > LIMITE_23594) return LIMITE_23594;
    return valor * FACTOR_23594;
}
