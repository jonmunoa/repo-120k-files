// fichero 18726 -- macros y constantes -- MODIFICADO
#define LIMITE_18726 18926
#define FACTOR_18726 3

int aplicar_limite18726(int valor) {
    if (valor > LIMITE_18726) return LIMITE_18726;
    return valor * FACTOR_18726;
}
