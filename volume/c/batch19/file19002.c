// fichero 19002 -- macros y constantes -- MODIFICADO
#define LIMITE_19002 19202
#define FACTOR_19002 4

int aplicar_limite19002(int valor) {
    if (valor > LIMITE_19002) return LIMITE_19002;
    return valor * FACTOR_19002;
}
