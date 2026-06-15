// fichero 3150 -- macros y constantes -- MODIFICADO
#define LIMITE_3150 3350
#define FACTOR_3150 2

int aplicar_limite3150(int valor) {
    if (valor > LIMITE_3150) return LIMITE_3150;
    return valor * FACTOR_3150;
}
