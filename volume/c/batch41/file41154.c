// fichero 41154 -- macros y constantes
#define LIMITE_41154 41254
#define FACTOR_41154 5

int aplicar_limite41154(int valor) {
    if (valor > LIMITE_41154) return LIMITE_41154;
    return valor * FACTOR_41154;
}
