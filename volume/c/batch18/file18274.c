// fichero 18274 -- macros y constantes -- MODIFICADO
#define LIMITE_18274 18474
#define FACTOR_18274 6

int aplicar_limite18274(int valor) {
    if (valor > LIMITE_18274) return LIMITE_18274;
    return valor * FACTOR_18274;
}
