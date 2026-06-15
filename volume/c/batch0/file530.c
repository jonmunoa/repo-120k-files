// fichero 530 -- macros y constantes -- MODIFICADO
#define LIMITE_530 730
#define FACTOR_530 2

int aplicar_limite530(int valor) {
    if (valor > LIMITE_530) return LIMITE_530;
    return valor * FACTOR_530;
}
