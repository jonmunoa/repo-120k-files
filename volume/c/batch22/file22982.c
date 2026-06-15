// fichero 22982 -- macros y constantes -- MODIFICADO
#define LIMITE_22982 23182
#define FACTOR_22982 4

int aplicar_limite22982(int valor) {
    if (valor > LIMITE_22982) return LIMITE_22982;
    return valor * FACTOR_22982;
}
