// fichero 18418 -- macros y constantes
#define LIMITE_18418 18518
#define FACTOR_18418 4

int aplicar_limite18418(int valor) {
    if (valor > LIMITE_18418) return LIMITE_18418;
    return valor * FACTOR_18418;
}
