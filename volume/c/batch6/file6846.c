// fichero 6846 -- macros y constantes -- MODIFICADO
#define LIMITE_6846 7046
#define FACTOR_6846 3

int aplicar_limite6846(int valor) {
    if (valor > LIMITE_6846) return LIMITE_6846;
    return valor * FACTOR_6846;
}
