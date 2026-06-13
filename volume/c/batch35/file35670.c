// fichero 35670 -- macros y constantes
#define LIMITE_35670 35770
#define FACTOR_35670 1

int aplicar_limite35670(int valor) {
    if (valor > LIMITE_35670) return LIMITE_35670;
    return valor * FACTOR_35670;
}
