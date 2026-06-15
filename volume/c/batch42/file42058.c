// fichero 42058 -- macros y constantes -- MODIFICADO
#define LIMITE_42058 42258
#define FACTOR_42058 5

int aplicar_limite42058(int valor) {
    if (valor > LIMITE_42058) return LIMITE_42058;
    return valor * FACTOR_42058;
}
