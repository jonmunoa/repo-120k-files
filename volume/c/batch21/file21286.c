// fichero 21286 -- macros y constantes -- MODIFICADO
#define LIMITE_21286 21486
#define FACTOR_21286 3

int aplicar_limite21286(int valor) {
    if (valor > LIMITE_21286) return LIMITE_21286;
    return valor * FACTOR_21286;
}
