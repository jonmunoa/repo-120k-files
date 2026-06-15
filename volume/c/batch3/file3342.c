// fichero 3342 -- macros y constantes -- MODIFICADO
#define LIMITE_3342 3542
#define FACTOR_3342 4

int aplicar_limite3342(int valor) {
    if (valor > LIMITE_3342) return LIMITE_3342;
    return valor * FACTOR_3342;
}
