// fichero 27906 -- macros y constantes -- MODIFICADO
#define LIMITE_27906 28106
#define FACTOR_27906 3

int aplicar_limite27906(int valor) {
    if (valor > LIMITE_27906) return LIMITE_27906;
    return valor * FACTOR_27906;
}
