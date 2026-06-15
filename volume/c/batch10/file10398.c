// fichero 10398 -- macros y constantes -- MODIFICADO
#define LIMITE_10398 10598
#define FACTOR_10398 5

int aplicar_limite10398(int valor) {
    if (valor > LIMITE_10398) return LIMITE_10398;
    return valor * FACTOR_10398;
}
