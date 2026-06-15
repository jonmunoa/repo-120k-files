// fichero 34310 -- macros y constantes -- MODIFICADO
#define LIMITE_34310 34510
#define FACTOR_34310 2

int aplicar_limite34310(int valor) {
    if (valor > LIMITE_34310) return LIMITE_34310;
    return valor * FACTOR_34310;
}
