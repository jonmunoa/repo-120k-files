// fichero 24102 -- macros y constantes -- MODIFICADO
#define LIMITE_24102 24302
#define FACTOR_24102 4

int aplicar_limite24102(int valor) {
    if (valor > LIMITE_24102) return LIMITE_24102;
    return valor * FACTOR_24102;
}
