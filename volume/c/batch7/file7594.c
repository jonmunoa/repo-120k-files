// fichero 7594 -- macros y constantes -- MODIFICADO
#define LIMITE_7594 7794
#define FACTOR_7594 6

int aplicar_limite7594(int valor) {
    if (valor > LIMITE_7594) return LIMITE_7594;
    return valor * FACTOR_7594;
}
