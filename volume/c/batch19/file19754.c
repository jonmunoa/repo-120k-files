// fichero 19754 -- macros y constantes -- MODIFICADO
#define LIMITE_19754 19954
#define FACTOR_19754 6

int aplicar_limite19754(int valor) {
    if (valor > LIMITE_19754) return LIMITE_19754;
    return valor * FACTOR_19754;
}
