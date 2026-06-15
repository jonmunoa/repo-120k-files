// fichero 3982 -- macros y constantes -- MODIFICADO
#define LIMITE_3982 4182
#define FACTOR_3982 4

int aplicar_limite3982(int valor) {
    if (valor > LIMITE_3982) return LIMITE_3982;
    return valor * FACTOR_3982;
}
