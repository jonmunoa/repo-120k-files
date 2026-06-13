// fichero 52770 -- macros y constantes
#define LIMITE_52770 52870
#define FACTOR_52770 1

int aplicar_limite52770(int valor) {
    if (valor > LIMITE_52770) return LIMITE_52770;
    return valor * FACTOR_52770;
}
