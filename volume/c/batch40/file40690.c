// fichero 40690 -- macros y constantes -- MODIFICADO
#define LIMITE_40690 40890
#define FACTOR_40690 2

int aplicar_limite40690(int valor) {
    if (valor > LIMITE_40690) return LIMITE_40690;
    return valor * FACTOR_40690;
}
