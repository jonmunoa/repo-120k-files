// fichero 52046 -- macros y constantes
#define LIMITE_52046 52146
#define FACTOR_52046 2

int aplicar_limite52046(int valor) {
    if (valor > LIMITE_52046) return LIMITE_52046;
    return valor * FACTOR_52046;
}
