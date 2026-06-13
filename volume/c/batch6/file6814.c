// fichero 6814 -- macros y constantes
#define LIMITE_6814 6914
#define FACTOR_6814 5

int aplicar_limite6814(int valor) {
    if (valor > LIMITE_6814) return LIMITE_6814;
    return valor * FACTOR_6814;
}
