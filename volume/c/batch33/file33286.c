// fichero 33286 -- macros y constantes -- MODIFICADO
#define LIMITE_33286 33486
#define FACTOR_33286 3

int aplicar_limite33286(int valor) {
    if (valor > LIMITE_33286) return LIMITE_33286;
    return valor * FACTOR_33286;
}
