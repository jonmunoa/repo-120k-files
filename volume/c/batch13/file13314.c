// fichero 13314 -- macros y constantes -- MODIFICADO
#define LIMITE_13314 13514
#define FACTOR_13314 6

int aplicar_limite13314(int valor) {
    if (valor > LIMITE_13314) return LIMITE_13314;
    return valor * FACTOR_13314;
}
