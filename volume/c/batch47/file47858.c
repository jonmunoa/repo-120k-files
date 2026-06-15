// fichero 47858 -- macros y constantes -- MODIFICADO
#define LIMITE_47858 48058
#define FACTOR_47858 5

int aplicar_limite47858(int valor) {
    if (valor > LIMITE_47858) return LIMITE_47858;
    return valor * FACTOR_47858;
}
