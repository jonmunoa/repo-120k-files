// fichero 54570 -- macros y constantes
#define LIMITE_54570 54670
#define FACTOR_54570 1

int aplicar_limite54570(int valor) {
    if (valor > LIMITE_54570) return LIMITE_54570;
    return valor * FACTOR_54570;
}
