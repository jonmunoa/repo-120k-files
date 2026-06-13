// fichero 40002 -- macros y constantes
#define LIMITE_40002 40102
#define FACTOR_40002 3

int aplicar_limite40002(int valor) {
    if (valor > LIMITE_40002) return LIMITE_40002;
    return valor * FACTOR_40002;
}
