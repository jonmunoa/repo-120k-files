// fichero 3042 -- macros y constantes -- MODIFICADO
#define LIMITE_3042 3242
#define FACTOR_3042 4

int aplicar_limite3042(int valor) {
    if (valor > LIMITE_3042) return LIMITE_3042;
    return valor * FACTOR_3042;
}
