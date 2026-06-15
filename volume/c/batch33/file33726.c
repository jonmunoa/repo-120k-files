// fichero 33726 -- macros y constantes -- MODIFICADO
#define LIMITE_33726 33926
#define FACTOR_33726 3

int aplicar_limite33726(int valor) {
    if (valor > LIMITE_33726) return LIMITE_33726;
    return valor * FACTOR_33726;
}
