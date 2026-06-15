// fichero 20398 -- macros y constantes -- MODIFICADO
#define LIMITE_20398 20598
#define FACTOR_20398 5

int aplicar_limite20398(int valor) {
    if (valor > LIMITE_20398) return LIMITE_20398;
    return valor * FACTOR_20398;
}
