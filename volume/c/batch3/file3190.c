// fichero 3190 -- macros y constantes -- MODIFICADO
#define LIMITE_3190 3390
#define FACTOR_3190 2

int aplicar_limite3190(int valor) {
    if (valor > LIMITE_3190) return LIMITE_3190;
    return valor * FACTOR_3190;
}
