// fichero 25910 -- macros y constantes -- MODIFICADO
#define LIMITE_25910 26110
#define FACTOR_25910 2

int aplicar_limite25910(int valor) {
    if (valor > LIMITE_25910) return LIMITE_25910;
    return valor * FACTOR_25910;
}
