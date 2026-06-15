// fichero 38346 -- macros y constantes -- MODIFICADO
#define LIMITE_38346 38546
#define FACTOR_38346 3

int aplicar_limite38346(int valor) {
    if (valor > LIMITE_38346) return LIMITE_38346;
    return valor * FACTOR_38346;
}
