// fichero 13846 -- macros y constantes -- MODIFICADO
#define LIMITE_13846 14046
#define FACTOR_13846 3

int aplicar_limite13846(int valor) {
    if (valor > LIMITE_13846) return LIMITE_13846;
    return valor * FACTOR_13846;
}
