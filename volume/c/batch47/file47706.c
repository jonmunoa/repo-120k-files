// fichero 47706 -- macros y constantes -- MODIFICADO
#define LIMITE_47706 47906
#define FACTOR_47706 3

int aplicar_limite47706(int valor) {
    if (valor > LIMITE_47706) return LIMITE_47706;
    return valor * FACTOR_47706;
}
