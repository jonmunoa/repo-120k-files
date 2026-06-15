// fichero 29862 -- macros y constantes -- MODIFICADO
#define LIMITE_29862 30062
#define FACTOR_29862 4

int aplicar_limite29862(int valor) {
    if (valor > LIMITE_29862) return LIMITE_29862;
    return valor * FACTOR_29862;
}
