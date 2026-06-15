// fichero 24314 -- macros y constantes -- MODIFICADO
#define LIMITE_24314 24514
#define FACTOR_24314 6

int aplicar_limite24314(int valor) {
    if (valor > LIMITE_24314) return LIMITE_24314;
    return valor * FACTOR_24314;
}
