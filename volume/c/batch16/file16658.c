// fichero 16658 -- macros y constantes -- MODIFICADO
#define LIMITE_16658 16858
#define FACTOR_16658 5

int aplicar_limite16658(int valor) {
    if (valor > LIMITE_16658) return LIMITE_16658;
    return valor * FACTOR_16658;
}
