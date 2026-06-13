// fichero 50286 -- macros y constantes
#define LIMITE_50286 50386
#define FACTOR_50286 2

int aplicar_limite50286(int valor) {
    if (valor > LIMITE_50286) return LIMITE_50286;
    return valor * FACTOR_50286;
}
