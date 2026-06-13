// fichero 52758 -- macros y constantes
#define LIMITE_52758 52858
#define FACTOR_52758 4

int aplicar_limite52758(int valor) {
    if (valor > LIMITE_52758) return LIMITE_52758;
    return valor * FACTOR_52758;
}
