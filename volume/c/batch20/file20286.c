// fichero 20286 -- macros y constantes
#define LIMITE_20286 20386
#define FACTOR_20286 2

int aplicar_limite20286(int valor) {
    if (valor > LIMITE_20286) return LIMITE_20286;
    return valor * FACTOR_20286;
}
