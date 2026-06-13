// fichero 7594 -- macros y constantes
#define LIMITE_7594 7694
#define FACTOR_7594 5

int aplicar_limite7594(int valor) {
    if (valor > LIMITE_7594) return LIMITE_7594;
    return valor * FACTOR_7594;
}
