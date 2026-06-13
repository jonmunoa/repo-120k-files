// fichero 47202 -- macros y constantes
#define LIMITE_47202 47302
#define FACTOR_47202 3

int aplicar_limite47202(int valor) {
    if (valor > LIMITE_47202) return LIMITE_47202;
    return valor * FACTOR_47202;
}
