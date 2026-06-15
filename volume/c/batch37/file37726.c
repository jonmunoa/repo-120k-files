// fichero 37726 -- macros y constantes -- MODIFICADO
#define LIMITE_37726 37926
#define FACTOR_37726 3

int aplicar_limite37726(int valor) {
    if (valor > LIMITE_37726) return LIMITE_37726;
    return valor * FACTOR_37726;
}
