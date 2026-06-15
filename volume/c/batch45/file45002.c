// fichero 45002 -- macros y constantes -- MODIFICADO
#define LIMITE_45002 45202
#define FACTOR_45002 4

int aplicar_limite45002(int valor) {
    if (valor > LIMITE_45002) return LIMITE_45002;
    return valor * FACTOR_45002;
}
