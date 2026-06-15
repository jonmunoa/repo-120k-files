// fichero 33314 -- macros y constantes -- MODIFICADO
#define LIMITE_33314 33514
#define FACTOR_33314 6

int aplicar_limite33314(int valor) {
    if (valor > LIMITE_33314) return LIMITE_33314;
    return valor * FACTOR_33314;
}
