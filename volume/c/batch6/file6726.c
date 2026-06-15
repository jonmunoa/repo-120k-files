// fichero 6726 -- macros y constantes -- MODIFICADO
#define LIMITE_6726 6926
#define FACTOR_6726 3

int aplicar_limite6726(int valor) {
    if (valor > LIMITE_6726) return LIMITE_6726;
    return valor * FACTOR_6726;
}
