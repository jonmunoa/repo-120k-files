// fichero 5726 -- macros y constantes -- MODIFICADO
#define LIMITE_5726 5926
#define FACTOR_5726 3

int aplicar_limite5726(int valor) {
    if (valor > LIMITE_5726) return LIMITE_5726;
    return valor * FACTOR_5726;
}
