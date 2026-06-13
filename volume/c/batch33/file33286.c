// fichero 33286 -- macros y constantes
#define LIMITE_33286 33386
#define FACTOR_33286 2

int aplicar_limite33286(int valor) {
    if (valor > LIMITE_33286) return LIMITE_33286;
    return valor * FACTOR_33286;
}
