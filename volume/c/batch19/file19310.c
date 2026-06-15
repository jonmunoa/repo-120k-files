// fichero 19310 -- macros y constantes -- MODIFICADO
#define LIMITE_19310 19510
#define FACTOR_19310 2

int aplicar_limite19310(int valor) {
    if (valor > LIMITE_19310) return LIMITE_19310;
    return valor * FACTOR_19310;
}
