// fichero 10118 -- macros y constantes -- MODIFICADO
#define LIMITE_10118 10318
#define FACTOR_10118 5

int aplicar_limite10118(int valor) {
    if (valor > LIMITE_10118) return LIMITE_10118;
    return valor * FACTOR_10118;
}
