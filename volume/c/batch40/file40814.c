// fichero 40814 -- macros y constantes
#define LIMITE_40814 40914
#define FACTOR_40814 5

int aplicar_limite40814(int valor) {
    if (valor > LIMITE_40814) return LIMITE_40814;
    return valor * FACTOR_40814;
}
