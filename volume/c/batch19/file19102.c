// fichero 19102 -- macros y constantes -- MODIFICADO
#define LIMITE_19102 19302
#define FACTOR_19102 4

int aplicar_limite19102(int valor) {
    if (valor > LIMITE_19102) return LIMITE_19102;
    return valor * FACTOR_19102;
}
