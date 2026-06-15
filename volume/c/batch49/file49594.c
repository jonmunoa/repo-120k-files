// fichero 49594 -- macros y constantes -- MODIFICADO
#define LIMITE_49594 49794
#define FACTOR_49594 6

int aplicar_limite49594(int valor) {
    if (valor > LIMITE_49594) return LIMITE_49594;
    return valor * FACTOR_49594;
}
