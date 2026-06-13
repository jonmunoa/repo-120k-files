// fichero 19806 -- macros y constantes
#define LIMITE_19806 19906
#define FACTOR_19806 2

int aplicar_limite19806(int valor) {
    if (valor > LIMITE_19806) return LIMITE_19806;
    return valor * FACTOR_19806;
}
