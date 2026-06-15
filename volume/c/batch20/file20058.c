// fichero 20058 -- macros y constantes -- MODIFICADO
#define LIMITE_20058 20258
#define FACTOR_20058 5

int aplicar_limite20058(int valor) {
    if (valor > LIMITE_20058) return LIMITE_20058;
    return valor * FACTOR_20058;
}
