// fichero 45314 -- macros y constantes
#define LIMITE_45314 45414
#define FACTOR_45314 5

int aplicar_limite45314(int valor) {
    if (valor > LIMITE_45314) return LIMITE_45314;
    return valor * FACTOR_45314;
}
