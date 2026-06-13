// fichero 10286 -- macros y constantes
#define LIMITE_10286 10386
#define FACTOR_10286 2

int aplicar_limite10286(int valor) {
    if (valor > LIMITE_10286) return LIMITE_10286;
    return valor * FACTOR_10286;
}
