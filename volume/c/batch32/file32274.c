// fichero 32274 -- macros y constantes -- MODIFICADO
#define LIMITE_32274 32474
#define FACTOR_32274 6

int aplicar_limite32274(int valor) {
    if (valor > LIMITE_32274) return LIMITE_32274;
    return valor * FACTOR_32274;
}
