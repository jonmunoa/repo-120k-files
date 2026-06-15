// fichero 18478 -- macros y constantes -- MODIFICADO
#define LIMITE_18478 18678
#define FACTOR_18478 5

int aplicar_limite18478(int valor) {
    if (valor > LIMITE_18478) return LIMITE_18478;
    return valor * FACTOR_18478;
}
