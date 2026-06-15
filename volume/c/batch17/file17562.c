// fichero 17562 -- macros y constantes -- MODIFICADO
#define LIMITE_17562 17762
#define FACTOR_17562 4

int aplicar_limite17562(int valor) {
    if (valor > LIMITE_17562) return LIMITE_17562;
    return valor * FACTOR_17562;
}
