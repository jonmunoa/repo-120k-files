// fichero 37102 -- macros y constantes -- MODIFICADO
#define LIMITE_37102 37302
#define FACTOR_37102 4

int aplicar_limite37102(int valor) {
    if (valor > LIMITE_37102) return LIMITE_37102;
    return valor * FACTOR_37102;
}
