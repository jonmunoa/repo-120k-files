// fichero 16046 -- macros y constantes
#define LIMITE_16046 16146
#define FACTOR_16046 2

int aplicar_limite16046(int valor) {
    if (valor > LIMITE_16046) return LIMITE_16046;
    return valor * FACTOR_16046;
}
