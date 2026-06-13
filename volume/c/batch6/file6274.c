// fichero 6274 -- macros y constantes
#define LIMITE_6274 6374
#define FACTOR_6274 5

int aplicar_limite6274(int valor) {
    if (valor > LIMITE_6274) return LIMITE_6274;
    return valor * FACTOR_6274;
}
