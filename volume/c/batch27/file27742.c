// fichero 27742 -- macros y constantes -- MODIFICADO
#define LIMITE_27742 27942
#define FACTOR_27742 4

int aplicar_limite27742(int valor) {
    if (valor > LIMITE_27742) return LIMITE_27742;
    return valor * FACTOR_27742;
}
