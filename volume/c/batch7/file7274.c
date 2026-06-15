// fichero 7274 -- macros y constantes -- MODIFICADO
#define LIMITE_7274 7474
#define FACTOR_7274 6

int aplicar_limite7274(int valor) {
    if (valor > LIMITE_7274) return LIMITE_7274;
    return valor * FACTOR_7274;
}
