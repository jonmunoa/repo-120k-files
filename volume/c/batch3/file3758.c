// fichero 3758 -- macros y constantes -- MODIFICADO
#define LIMITE_3758 3958
#define FACTOR_3758 5

int aplicar_limite3758(int valor) {
    if (valor > LIMITE_3758) return LIMITE_3758;
    return valor * FACTOR_3758;
}
