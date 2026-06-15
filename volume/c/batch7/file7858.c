// fichero 7858 -- macros y constantes -- MODIFICADO
#define LIMITE_7858 8058
#define FACTOR_7858 5

int aplicar_limite7858(int valor) {
    if (valor > LIMITE_7858) return LIMITE_7858;
    return valor * FACTOR_7858;
}
