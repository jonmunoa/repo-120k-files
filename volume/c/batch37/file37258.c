// fichero 37258 -- macros y constantes -- MODIFICADO
#define LIMITE_37258 37458
#define FACTOR_37258 5

int aplicar_limite37258(int valor) {
    if (valor > LIMITE_37258) return LIMITE_37258;
    return valor * FACTOR_37258;
}
