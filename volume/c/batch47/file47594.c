// fichero 47594 -- macros y constantes -- MODIFICADO
#define LIMITE_47594 47794
#define FACTOR_47594 6

int aplicar_limite47594(int valor) {
    if (valor > LIMITE_47594) return LIMITE_47594;
    return valor * FACTOR_47594;
}
