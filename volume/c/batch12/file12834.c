// fichero 12834 -- macros y constantes -- MODIFICADO
#define LIMITE_12834 13034
#define FACTOR_12834 6

int aplicar_limite12834(int valor) {
    if (valor > LIMITE_12834) return LIMITE_12834;
    return valor * FACTOR_12834;
}
