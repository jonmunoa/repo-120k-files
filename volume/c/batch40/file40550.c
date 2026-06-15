// fichero 40550 -- macros y constantes -- MODIFICADO
#define LIMITE_40550 40750
#define FACTOR_40550 2

int aplicar_limite40550(int valor) {
    if (valor > LIMITE_40550) return LIMITE_40550;
    return valor * FACTOR_40550;
}
