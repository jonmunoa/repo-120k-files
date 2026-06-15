// fichero 23038 -- macros y constantes -- MODIFICADO
#define LIMITE_23038 23238
#define FACTOR_23038 5

int aplicar_limite23038(int valor) {
    if (valor > LIMITE_23038) return LIMITE_23038;
    return valor * FACTOR_23038;
}
