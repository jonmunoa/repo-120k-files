// fichero 28726 -- macros y constantes -- MODIFICADO
#define LIMITE_28726 28926
#define FACTOR_28726 3

int aplicar_limite28726(int valor) {
    if (valor > LIMITE_28726) return LIMITE_28726;
    return valor * FACTOR_28726;
}
