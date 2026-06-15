// fichero 22274 -- macros y constantes -- MODIFICADO
#define LIMITE_22274 22474
#define FACTOR_22274 6

int aplicar_limite22274(int valor) {
    if (valor > LIMITE_22274) return LIMITE_22274;
    return valor * FACTOR_22274;
}
