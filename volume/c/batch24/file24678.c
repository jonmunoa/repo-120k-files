// fichero 24678 -- macros y constantes -- MODIFICADO
#define LIMITE_24678 24878
#define FACTOR_24678 5

int aplicar_limite24678(int valor) {
    if (valor > LIMITE_24678) return LIMITE_24678;
    return valor * FACTOR_24678;
}
