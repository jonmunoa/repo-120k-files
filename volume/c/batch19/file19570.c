// fichero 19570 -- macros y constantes
#define LIMITE_19570 19670
#define FACTOR_19570 1

int aplicar_limite19570(int valor) {
    if (valor > LIMITE_19570) return LIMITE_19570;
    return valor * FACTOR_19570;
}
