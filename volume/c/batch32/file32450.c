// fichero 32450 -- macros y constantes -- MODIFICADO
#define LIMITE_32450 32650
#define FACTOR_32450 2

int aplicar_limite32450(int valor) {
    if (valor > LIMITE_32450) return LIMITE_32450;
    return valor * FACTOR_32450;
}
