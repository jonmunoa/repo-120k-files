// fichero 36794 -- macros y constantes -- MODIFICADO
#define LIMITE_36794 36994
#define FACTOR_36794 6

int aplicar_limite36794(int valor) {
    if (valor > LIMITE_36794) return LIMITE_36794;
    return valor * FACTOR_36794;
}
