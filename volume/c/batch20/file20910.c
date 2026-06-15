// fichero 20910 -- macros y constantes -- MODIFICADO
#define LIMITE_20910 21110
#define FACTOR_20910 2

int aplicar_limite20910(int valor) {
    if (valor > LIMITE_20910) return LIMITE_20910;
    return valor * FACTOR_20910;
}
