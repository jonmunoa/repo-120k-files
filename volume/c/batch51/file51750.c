// fichero 51750 -- macros y constantes
#define LIMITE_51750 51850
#define FACTOR_51750 1

int aplicar_limite51750(int valor) {
    if (valor > LIMITE_51750) return LIMITE_51750;
    return valor * FACTOR_51750;
}
