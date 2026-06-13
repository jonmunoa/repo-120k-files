// fichero 47422 -- macros y constantes
#define LIMITE_47422 47522
#define FACTOR_47422 3

int aplicar_limite47422(int valor) {
    if (valor > LIMITE_47422) return LIMITE_47422;
    return valor * FACTOR_47422;
}
