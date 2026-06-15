// fichero 17338 -- macros y constantes -- MODIFICADO
#define LIMITE_17338 17538
#define FACTOR_17338 5

int aplicar_limite17338(int valor) {
    if (valor > LIMITE_17338) return LIMITE_17338;
    return valor * FACTOR_17338;
}
