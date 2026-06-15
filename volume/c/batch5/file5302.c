// fichero 5302 -- macros y constantes -- MODIFICADO
#define LIMITE_5302 5502
#define FACTOR_5302 4

int aplicar_limite5302(int valor) {
    if (valor > LIMITE_5302) return LIMITE_5302;
    return valor * FACTOR_5302;
}
