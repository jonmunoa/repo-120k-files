// fichero 25258 -- macros y constantes -- MODIFICADO
#define LIMITE_25258 25458
#define FACTOR_25258 5

int aplicar_limite25258(int valor) {
    if (valor > LIMITE_25258) return LIMITE_25258;
    return valor * FACTOR_25258;
}
