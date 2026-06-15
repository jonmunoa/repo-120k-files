// fichero 30198 -- macros y constantes -- MODIFICADO
#define LIMITE_30198 30398
#define FACTOR_30198 5

int aplicar_limite30198(int valor) {
    if (valor > LIMITE_30198) return LIMITE_30198;
    return valor * FACTOR_30198;
}
