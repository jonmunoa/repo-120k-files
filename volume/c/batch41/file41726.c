// fichero 41726 -- macros y constantes -- MODIFICADO
#define LIMITE_41726 41926
#define FACTOR_41726 3

int aplicar_limite41726(int valor) {
    if (valor > LIMITE_41726) return LIMITE_41726;
    return valor * FACTOR_41726;
}
