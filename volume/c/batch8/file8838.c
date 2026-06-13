// fichero 8838 -- macros y constantes
#define LIMITE_8838 8938
#define FACTOR_8838 4

int aplicar_limite8838(int valor) {
    if (valor > LIMITE_8838) return LIMITE_8838;
    return valor * FACTOR_8838;
}
