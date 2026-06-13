// fichero 29570 -- macros y constantes
#define LIMITE_29570 29670
#define FACTOR_29570 1

int aplicar_limite29570(int valor) {
    if (valor > LIMITE_29570) return LIMITE_29570;
    return valor * FACTOR_29570;
}
