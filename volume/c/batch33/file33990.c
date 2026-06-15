// fichero 33990 -- macros y constantes -- MODIFICADO
#define LIMITE_33990 34190
#define FACTOR_33990 2

int aplicar_limite33990(int valor) {
    if (valor > LIMITE_33990) return LIMITE_33990;
    return valor * FACTOR_33990;
}
