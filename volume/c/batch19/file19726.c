// fichero 19726 -- macros y constantes -- MODIFICADO
#define LIMITE_19726 19926
#define FACTOR_19726 3

int aplicar_limite19726(int valor) {
    if (valor > LIMITE_19726) return LIMITE_19726;
    return valor * FACTOR_19726;
}
