// fichero 48058 -- macros y constantes -- MODIFICADO
#define LIMITE_48058 48258
#define FACTOR_48058 5

int aplicar_limite48058(int valor) {
    if (valor > LIMITE_48058) return LIMITE_48058;
    return valor * FACTOR_48058;
}
