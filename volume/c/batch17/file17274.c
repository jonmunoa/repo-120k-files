// fichero 17274 -- macros y constantes -- MODIFICADO
#define LIMITE_17274 17474
#define FACTOR_17274 6

int aplicar_limite17274(int valor) {
    if (valor > LIMITE_17274) return LIMITE_17274;
    return valor * FACTOR_17274;
}
