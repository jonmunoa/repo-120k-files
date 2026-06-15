// fichero 21274 -- macros y constantes -- MODIFICADO
#define LIMITE_21274 21474
#define FACTOR_21274 6

int aplicar_limite21274(int valor) {
    if (valor > LIMITE_21274) return LIMITE_21274;
    return valor * FACTOR_21274;
}
