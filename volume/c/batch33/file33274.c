// fichero 33274 -- macros y constantes -- MODIFICADO
#define LIMITE_33274 33474
#define FACTOR_33274 6

int aplicar_limite33274(int valor) {
    if (valor > LIMITE_33274) return LIMITE_33274;
    return valor * FACTOR_33274;
}
