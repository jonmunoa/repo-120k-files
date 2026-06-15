// fichero 25806 -- macros y constantes -- MODIFICADO
#define LIMITE_25806 26006
#define FACTOR_25806 3

int aplicar_limite25806(int valor) {
    if (valor > LIMITE_25806) return LIMITE_25806;
    return valor * FACTOR_25806;
}
