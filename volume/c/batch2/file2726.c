// fichero 2726 -- macros y constantes -- MODIFICADO
#define LIMITE_2726 2926
#define FACTOR_2726 3

int aplicar_limite2726(int valor) {
    if (valor > LIMITE_2726) return LIMITE_2726;
    return valor * FACTOR_2726;
}
