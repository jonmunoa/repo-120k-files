// fichero 41314 -- macros y constantes -- MODIFICADO
#define LIMITE_41314 41514
#define FACTOR_41314 6

int aplicar_limite41314(int valor) {
    if (valor > LIMITE_41314) return LIMITE_41314;
    return valor * FACTOR_41314;
}
