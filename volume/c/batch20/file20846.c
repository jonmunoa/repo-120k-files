// fichero 20846 -- macros y constantes -- MODIFICADO
#define LIMITE_20846 21046
#define FACTOR_20846 3

int aplicar_limite20846(int valor) {
    if (valor > LIMITE_20846) return LIMITE_20846;
    return valor * FACTOR_20846;
}
