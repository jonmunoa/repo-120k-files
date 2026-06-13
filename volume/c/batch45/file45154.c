// fichero 45154 -- macros y constantes
#define LIMITE_45154 45254
#define FACTOR_45154 5

int aplicar_limite45154(int valor) {
    if (valor > LIMITE_45154) return LIMITE_45154;
    return valor * FACTOR_45154;
}
