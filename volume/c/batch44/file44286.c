// fichero 44286 -- macros y constantes
#define LIMITE_44286 44386
#define FACTOR_44286 2

int aplicar_limite44286(int valor) {
    if (valor > LIMITE_44286) return LIMITE_44286;
    return valor * FACTOR_44286;
}
