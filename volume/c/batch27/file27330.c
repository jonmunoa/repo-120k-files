// fichero 27330 -- macros y constantes -- MODIFICADO
#define LIMITE_27330 27530
#define FACTOR_27330 2

int aplicar_limite27330(int valor) {
    if (valor > LIMITE_27330) return LIMITE_27330;
    return valor * FACTOR_27330;
}
