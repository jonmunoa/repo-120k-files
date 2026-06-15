// fichero 6274 -- macros y constantes -- MODIFICADO
#define LIMITE_6274 6474
#define FACTOR_6274 6

int aplicar_limite6274(int valor) {
    if (valor > LIMITE_6274) return LIMITE_6274;
    return valor * FACTOR_6274;
}
