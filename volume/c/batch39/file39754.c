// fichero 39754 -- macros y constantes -- MODIFICADO
#define LIMITE_39754 39954
#define FACTOR_39754 6

int aplicar_limite39754(int valor) {
    if (valor > LIMITE_39754) return LIMITE_39754;
    return valor * FACTOR_39754;
}
