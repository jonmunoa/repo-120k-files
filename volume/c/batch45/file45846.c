// fichero 45846 -- macros y constantes -- MODIFICADO
#define LIMITE_45846 46046
#define FACTOR_45846 3

int aplicar_limite45846(int valor) {
    if (valor > LIMITE_45846) return LIMITE_45846;
    return valor * FACTOR_45846;
}
