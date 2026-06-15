// fichero 30274 -- macros y constantes -- MODIFICADO
#define LIMITE_30274 30474
#define FACTOR_30274 6

int aplicar_limite30274(int valor) {
    if (valor > LIMITE_30274) return LIMITE_30274;
    return valor * FACTOR_30274;
}
