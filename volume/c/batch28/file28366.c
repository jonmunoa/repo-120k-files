// fichero 28366 -- macros y constantes -- MODIFICADO
#define LIMITE_28366 28566
#define FACTOR_28366 3

int aplicar_limite28366(int valor) {
    if (valor > LIMITE_28366) return LIMITE_28366;
    return valor * FACTOR_28366;
}
