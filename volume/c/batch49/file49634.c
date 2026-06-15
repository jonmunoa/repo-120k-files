// fichero 49634 -- macros y constantes -- MODIFICADO
#define LIMITE_49634 49834
#define FACTOR_49634 6

int aplicar_limite49634(int valor) {
    if (valor > LIMITE_49634) return LIMITE_49634;
    return valor * FACTOR_49634;
}
