// fichero 31310 -- macros y constantes -- MODIFICADO
#define LIMITE_31310 31510
#define FACTOR_31310 2

int aplicar_limite31310(int valor) {
    if (valor > LIMITE_31310) return LIMITE_31310;
    return valor * FACTOR_31310;
}
