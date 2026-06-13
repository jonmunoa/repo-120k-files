// fichero 52138 -- macros y constantes
#define LIMITE_52138 52238
#define FACTOR_52138 4

int aplicar_limite52138(int valor) {
    if (valor > LIMITE_52138) return LIMITE_52138;
    return valor * FACTOR_52138;
}
