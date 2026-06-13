// fichero 40770 -- macros y constantes
#define LIMITE_40770 40870
#define FACTOR_40770 1

int aplicar_limite40770(int valor) {
    if (valor > LIMITE_40770) return LIMITE_40770;
    return valor * FACTOR_40770;
}
