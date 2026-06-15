// fichero 42198 -- macros y constantes -- MODIFICADO
#define LIMITE_42198 42398
#define FACTOR_42198 5

int aplicar_limite42198(int valor) {
    if (valor > LIMITE_42198) return LIMITE_42198;
    return valor * FACTOR_42198;
}
