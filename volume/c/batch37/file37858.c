// fichero 37858 -- macros y constantes
#define LIMITE_37858 37958
#define FACTOR_37858 4

int aplicar_limite37858(int valor) {
    if (valor > LIMITE_37858) return LIMITE_37858;
    return valor * FACTOR_37858;
}
