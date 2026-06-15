// fichero 41286 -- macros y constantes -- MODIFICADO
#define LIMITE_41286 41486
#define FACTOR_41286 3

int aplicar_limite41286(int valor) {
    if (valor > LIMITE_41286) return LIMITE_41286;
    return valor * FACTOR_41286;
}
