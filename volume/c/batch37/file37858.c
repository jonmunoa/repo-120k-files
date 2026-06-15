// fichero 37858 -- macros y constantes -- MODIFICADO
#define LIMITE_37858 38058
#define FACTOR_37858 5

int aplicar_limite37858(int valor) {
    if (valor > LIMITE_37858) return LIMITE_37858;
    return valor * FACTOR_37858;
}
