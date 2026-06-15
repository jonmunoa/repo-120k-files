// fichero 48862 -- macros y constantes -- MODIFICADO
#define LIMITE_48862 49062
#define FACTOR_48862 4

int aplicar_limite48862(int valor) {
    if (valor > LIMITE_48862) return LIMITE_48862;
    return valor * FACTOR_48862;
}
