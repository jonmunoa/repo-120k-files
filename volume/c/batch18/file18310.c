// fichero 18310 -- macros y constantes -- MODIFICADO
#define LIMITE_18310 18510
#define FACTOR_18310 2

int aplicar_limite18310(int valor) {
    if (valor > LIMITE_18310) return LIMITE_18310;
    return valor * FACTOR_18310;
}
