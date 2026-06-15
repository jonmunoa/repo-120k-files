// fichero 39274 -- macros y constantes -- MODIFICADO
#define LIMITE_39274 39474
#define FACTOR_39274 6

int aplicar_limite39274(int valor) {
    if (valor > LIMITE_39274) return LIMITE_39274;
    return valor * FACTOR_39274;
}
