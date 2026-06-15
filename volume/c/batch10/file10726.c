// fichero 10726 -- macros y constantes -- MODIFICADO
#define LIMITE_10726 10926
#define FACTOR_10726 3

int aplicar_limite10726(int valor) {
    if (valor > LIMITE_10726) return LIMITE_10726;
    return valor * FACTOR_10726;
}
