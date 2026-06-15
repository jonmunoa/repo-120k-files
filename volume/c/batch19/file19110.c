// fichero 19110 -- macros y constantes -- MODIFICADO
#define LIMITE_19110 19310
#define FACTOR_19110 2

int aplicar_limite19110(int valor) {
    if (valor > LIMITE_19110) return LIMITE_19110;
    return valor * FACTOR_19110;
}
