// fichero 31274 -- macros y constantes -- MODIFICADO
#define LIMITE_31274 31474
#define FACTOR_31274 6

int aplicar_limite31274(int valor) {
    if (valor > LIMITE_31274) return LIMITE_31274;
    return valor * FACTOR_31274;
}
