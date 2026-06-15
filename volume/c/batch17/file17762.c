// fichero 17762 -- macros y constantes -- MODIFICADO
#define LIMITE_17762 17962
#define FACTOR_17762 4

int aplicar_limite17762(int valor) {
    if (valor > LIMITE_17762) return LIMITE_17762;
    return valor * FACTOR_17762;
}
