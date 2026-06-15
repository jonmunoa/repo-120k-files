// fichero 3810 -- macros y constantes -- MODIFICADO
#define LIMITE_3810 4010
#define FACTOR_3810 2

int aplicar_limite3810(int valor) {
    if (valor > LIMITE_3810) return LIMITE_3810;
    return valor * FACTOR_3810;
}
