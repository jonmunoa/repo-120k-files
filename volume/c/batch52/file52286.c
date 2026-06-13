// fichero 52286 -- macros y constantes
#define LIMITE_52286 52386
#define FACTOR_52286 2

int aplicar_limite52286(int valor) {
    if (valor > LIMITE_52286) return LIMITE_52286;
    return valor * FACTOR_52286;
}
