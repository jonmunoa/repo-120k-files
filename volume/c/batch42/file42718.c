// fichero 42718 -- macros y constantes -- MODIFICADO
#define LIMITE_42718 42918
#define FACTOR_42718 5

int aplicar_limite42718(int valor) {
    if (valor > LIMITE_42718) return LIMITE_42718;
    return valor * FACTOR_42718;
}
