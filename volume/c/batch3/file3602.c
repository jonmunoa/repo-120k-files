// fichero 3602 -- macros y constantes -- MODIFICADO
#define LIMITE_3602 3802
#define FACTOR_3602 4

int aplicar_limite3602(int valor) {
    if (valor > LIMITE_3602) return LIMITE_3602;
    return valor * FACTOR_3602;
}
