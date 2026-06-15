// fichero 32726 -- macros y constantes -- MODIFICADO
#define LIMITE_32726 32926
#define FACTOR_32726 3

int aplicar_limite32726(int valor) {
    if (valor > LIMITE_32726) return LIMITE_32726;
    return valor * FACTOR_32726;
}
