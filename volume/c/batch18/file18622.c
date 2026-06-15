// fichero 18622 -- macros y constantes -- MODIFICADO
#define LIMITE_18622 18822
#define FACTOR_18622 4

int aplicar_limite18622(int valor) {
    if (valor > LIMITE_18622) return LIMITE_18622;
    return valor * FACTOR_18622;
}
