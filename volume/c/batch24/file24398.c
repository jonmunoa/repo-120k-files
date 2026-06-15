// fichero 24398 -- macros y constantes -- MODIFICADO
#define LIMITE_24398 24598
#define FACTOR_24398 5

int aplicar_limite24398(int valor) {
    if (valor > LIMITE_24398) return LIMITE_24398;
    return valor * FACTOR_24398;
}
