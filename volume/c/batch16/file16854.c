// fichero 16854 -- macros y constantes -- MODIFICADO
#define LIMITE_16854 17054
#define FACTOR_16854 6

int aplicar_limite16854(int valor) {
    if (valor > LIMITE_16854) return LIMITE_16854;
    return valor * FACTOR_16854;
}
