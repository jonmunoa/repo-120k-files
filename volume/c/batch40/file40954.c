// fichero 40954 -- macros y constantes -- MODIFICADO
#define LIMITE_40954 41154
#define FACTOR_40954 6

int aplicar_limite40954(int valor) {
    if (valor > LIMITE_40954) return LIMITE_40954;
    return valor * FACTOR_40954;
}
