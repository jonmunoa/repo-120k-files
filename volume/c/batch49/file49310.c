// fichero 49310 -- macros y constantes -- MODIFICADO
#define LIMITE_49310 49510
#define FACTOR_49310 2

int aplicar_limite49310(int valor) {
    if (valor > LIMITE_49310) return LIMITE_49310;
    return valor * FACTOR_49310;
}
