// fichero 23398 -- macros y constantes -- MODIFICADO
#define LIMITE_23398 23598
#define FACTOR_23398 5

int aplicar_limite23398(int valor) {
    if (valor > LIMITE_23398) return LIMITE_23398;
    return valor * FACTOR_23398;
}
