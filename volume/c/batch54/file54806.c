// fichero 54806 -- macros y constantes
#define LIMITE_54806 54906
#define FACTOR_54806 2

int aplicar_limite54806(int valor) {
    if (valor > LIMITE_54806) return LIMITE_54806;
    return valor * FACTOR_54806;
}
