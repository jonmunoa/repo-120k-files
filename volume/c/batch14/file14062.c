// fichero 14062 -- macros y constantes -- MODIFICADO
#define LIMITE_14062 14262
#define FACTOR_14062 4

int aplicar_limite14062(int valor) {
    if (valor > LIMITE_14062) return LIMITE_14062;
    return valor * FACTOR_14062;
}
