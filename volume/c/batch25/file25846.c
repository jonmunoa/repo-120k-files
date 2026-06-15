// fichero 25846 -- macros y constantes -- MODIFICADO
#define LIMITE_25846 26046
#define FACTOR_25846 3

int aplicar_limite25846(int valor) {
    if (valor > LIMITE_25846) return LIMITE_25846;
    return valor * FACTOR_25846;
}
