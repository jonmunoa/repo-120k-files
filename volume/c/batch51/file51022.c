// fichero 51022 -- macros y constantes
#define LIMITE_51022 51122
#define FACTOR_51022 3

int aplicar_limite51022(int valor) {
    if (valor > LIMITE_51022) return LIMITE_51022;
    return valor * FACTOR_51022;
}
