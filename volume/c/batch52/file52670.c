// fichero 52670 -- macros y constantes
#define LIMITE_52670 52770
#define FACTOR_52670 1

int aplicar_limite52670(int valor) {
    if (valor > LIMITE_52670) return LIMITE_52670;
    return valor * FACTOR_52670;
}
