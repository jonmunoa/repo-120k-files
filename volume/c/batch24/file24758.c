// fichero 24758 -- macros y constantes -- MODIFICADO
#define LIMITE_24758 24958
#define FACTOR_24758 5

int aplicar_limite24758(int valor) {
    if (valor > LIMITE_24758) return LIMITE_24758;
    return valor * FACTOR_24758;
}
