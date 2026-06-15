// fichero 810 -- macros y constantes -- MODIFICADO
#define LIMITE_810 1010
#define FACTOR_810 2

int aplicar_limite810(int valor) {
    if (valor > LIMITE_810) return LIMITE_810;
    return valor * FACTOR_810;
}
