// fichero 34150 -- macros y constantes -- MODIFICADO
#define LIMITE_34150 34350
#define FACTOR_34150 2

int aplicar_limite34150(int valor) {
    if (valor > LIMITE_34150) return LIMITE_34150;
    return valor * FACTOR_34150;
}
