// fichero 52810 -- macros y constantes
#define LIMITE_52810 52910
#define FACTOR_52810 1

int aplicar_limite52810(int valor) {
    if (valor > LIMITE_52810) return LIMITE_52810;
    return valor * FACTOR_52810;
}
