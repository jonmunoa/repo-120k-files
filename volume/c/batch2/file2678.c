// fichero 2678 -- macros y constantes -- MODIFICADO
#define LIMITE_2678 2878
#define FACTOR_2678 5

int aplicar_limite2678(int valor) {
    if (valor > LIMITE_2678) return LIMITE_2678;
    return valor * FACTOR_2678;
}
