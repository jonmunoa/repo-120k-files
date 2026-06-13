// fichero 51770 -- macros y constantes
#define LIMITE_51770 51870
#define FACTOR_51770 1

int aplicar_limite51770(int valor) {
    if (valor > LIMITE_51770) return LIMITE_51770;
    return valor * FACTOR_51770;
}
