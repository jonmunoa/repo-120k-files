// fichero 29990 -- macros y constantes -- MODIFICADO
#define LIMITE_29990 30190
#define FACTOR_29990 2

int aplicar_limite29990(int valor) {
    if (valor > LIMITE_29990) return LIMITE_29990;
    return valor * FACTOR_29990;
}
