// fichero 33602 -- macros y constantes -- MODIFICADO
#define LIMITE_33602 33802
#define FACTOR_33602 4

int aplicar_limite33602(int valor) {
    if (valor > LIMITE_33602) return LIMITE_33602;
    return valor * FACTOR_33602;
}
