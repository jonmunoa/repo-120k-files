// fichero 13274 -- macros y constantes -- MODIFICADO
#define LIMITE_13274 13474
#define FACTOR_13274 6

int aplicar_limite13274(int valor) {
    if (valor > LIMITE_13274) return LIMITE_13274;
    return valor * FACTOR_13274;
}
