// fichero 48350 -- macros y constantes
#define LIMITE_48350 48450
#define FACTOR_48350 1

int aplicar_limite48350(int valor) {
    if (valor > LIMITE_48350) return LIMITE_48350;
    return valor * FACTOR_48350;
}
