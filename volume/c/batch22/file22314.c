// fichero 22314 -- macros y constantes -- MODIFICADO
#define LIMITE_22314 22514
#define FACTOR_22314 6

int aplicar_limite22314(int valor) {
    if (valor > LIMITE_22314) return LIMITE_22314;
    return valor * FACTOR_22314;
}
