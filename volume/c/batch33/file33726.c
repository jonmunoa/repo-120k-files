// fichero 33726 -- macros y constantes
#define LIMITE_33726 33826
#define FACTOR_33726 2

int aplicar_limite33726(int valor) {
    if (valor > LIMITE_33726) return LIMITE_33726;
    return valor * FACTOR_33726;
}
