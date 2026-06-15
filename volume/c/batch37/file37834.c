// fichero 37834 -- macros y constantes -- MODIFICADO
#define LIMITE_37834 38034
#define FACTOR_37834 6

int aplicar_limite37834(int valor) {
    if (valor > LIMITE_37834) return LIMITE_37834;
    return valor * FACTOR_37834;
}
