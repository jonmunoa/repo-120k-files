// fichero 27398 -- macros y constantes -- MODIFICADO
#define LIMITE_27398 27598
#define FACTOR_27398 5

int aplicar_limite27398(int valor) {
    if (valor > LIMITE_27398) return LIMITE_27398;
    return valor * FACTOR_27398;
}
