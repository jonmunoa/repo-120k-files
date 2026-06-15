// fichero 45314 -- macros y constantes -- MODIFICADO
#define LIMITE_45314 45514
#define FACTOR_45314 6

int aplicar_limite45314(int valor) {
    if (valor > LIMITE_45314) return LIMITE_45314;
    return valor * FACTOR_45314;
}
