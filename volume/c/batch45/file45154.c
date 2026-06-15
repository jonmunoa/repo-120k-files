// fichero 45154 -- macros y constantes -- MODIFICADO
#define LIMITE_45154 45354
#define FACTOR_45154 6

int aplicar_limite45154(int valor) {
    if (valor > LIMITE_45154) return LIMITE_45154;
    return valor * FACTOR_45154;
}
