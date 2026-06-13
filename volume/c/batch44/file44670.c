// fichero 44670 -- macros y constantes
#define LIMITE_44670 44770
#define FACTOR_44670 1

int aplicar_limite44670(int valor) {
    if (valor > LIMITE_44670) return LIMITE_44670;
    return valor * FACTOR_44670;
}
