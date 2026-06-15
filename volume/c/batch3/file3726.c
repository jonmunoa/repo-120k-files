// fichero 3726 -- macros y constantes -- MODIFICADO
#define LIMITE_3726 3926
#define FACTOR_3726 3

int aplicar_limite3726(int valor) {
    if (valor > LIMITE_3726) return LIMITE_3726;
    return valor * FACTOR_3726;
}
