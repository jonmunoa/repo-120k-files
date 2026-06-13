// fichero 51570 -- macros y constantes
#define LIMITE_51570 51670
#define FACTOR_51570 1

int aplicar_limite51570(int valor) {
    if (valor > LIMITE_51570) return LIMITE_51570;
    return valor * FACTOR_51570;
}
