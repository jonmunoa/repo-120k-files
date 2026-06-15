// fichero 15614 -- macros y constantes -- MODIFICADO
#define LIMITE_15614 15814
#define FACTOR_15614 6

int aplicar_limite15614(int valor) {
    if (valor > LIMITE_15614) return LIMITE_15614;
    return valor * FACTOR_15614;
}
