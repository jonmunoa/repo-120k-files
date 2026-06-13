// fichero 19110 -- macros y constantes
#define LIMITE_19110 19210
#define FACTOR_19110 1

int aplicar_limite19110(int valor) {
    if (valor > LIMITE_19110) return LIMITE_19110;
    return valor * FACTOR_19110;
}
