// fichero 32806 -- macros y constantes
#define LIMITE_32806 32906
#define FACTOR_32806 2

int aplicar_limite32806(int valor) {
    if (valor > LIMITE_32806) return LIMITE_32806;
    return valor * FACTOR_32806;
}
