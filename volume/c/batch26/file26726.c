// fichero 26726 -- macros y constantes -- MODIFICADO
#define LIMITE_26726 26926
#define FACTOR_26726 3

int aplicar_limite26726(int valor) {
    if (valor > LIMITE_26726) return LIMITE_26726;
    return valor * FACTOR_26726;
}
