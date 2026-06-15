// fichero 19854 -- macros y constantes -- MODIFICADO
#define LIMITE_19854 20054
#define FACTOR_19854 6

int aplicar_limite19854(int valor) {
    if (valor > LIMITE_19854) return LIMITE_19854;
    return valor * FACTOR_19854;
}
