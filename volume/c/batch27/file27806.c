// fichero 27806 -- macros y constantes
#define LIMITE_27806 27906
#define FACTOR_27806 2

int aplicar_limite27806(int valor) {
    if (valor > LIMITE_27806) return LIMITE_27806;
    return valor * FACTOR_27806;
}
