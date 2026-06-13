// fichero 48286 -- macros y constantes
#define LIMITE_48286 48386
#define FACTOR_48286 2

int aplicar_limite48286(int valor) {
    if (valor > LIMITE_48286) return LIMITE_48286;
    return valor * FACTOR_48286;
}
