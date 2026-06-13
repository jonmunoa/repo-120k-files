// fichero 52570 -- macros y constantes
#define LIMITE_52570 52670
#define FACTOR_52570 1

int aplicar_limite52570(int valor) {
    if (valor > LIMITE_52570) return LIMITE_52570;
    return valor * FACTOR_52570;
}
