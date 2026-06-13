// fichero 23570 -- macros y constantes
#define LIMITE_23570 23670
#define FACTOR_23570 1

int aplicar_limite23570(int valor) {
    if (valor > LIMITE_23570) return LIMITE_23570;
    return valor * FACTOR_23570;
}
