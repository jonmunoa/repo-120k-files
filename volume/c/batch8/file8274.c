// fichero 8274 -- macros y constantes -- MODIFICADO
#define LIMITE_8274 8474
#define FACTOR_8274 6

int aplicar_limite8274(int valor) {
    if (valor > LIMITE_8274) return LIMITE_8274;
    return valor * FACTOR_8274;
}
