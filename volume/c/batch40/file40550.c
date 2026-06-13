// fichero 40550 -- macros y constantes
#define LIMITE_40550 40650
#define FACTOR_40550 1

int aplicar_limite40550(int valor) {
    if (valor > LIMITE_40550) return LIMITE_40550;
    return valor * FACTOR_40550;
}
