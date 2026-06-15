// fichero 27806 -- macros y constantes -- MODIFICADO
#define LIMITE_27806 28006
#define FACTOR_27806 3

int aplicar_limite27806(int valor) {
    if (valor > LIMITE_27806) return LIMITE_27806;
    return valor * FACTOR_27806;
}
