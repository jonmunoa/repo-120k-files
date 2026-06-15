// fichero 41154 -- macros y constantes -- MODIFICADO
#define LIMITE_41154 41354
#define FACTOR_41154 6

int aplicar_limite41154(int valor) {
    if (valor > LIMITE_41154) return LIMITE_41154;
    return valor * FACTOR_41154;
}
