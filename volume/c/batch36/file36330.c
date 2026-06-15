// fichero 36330 -- macros y constantes -- MODIFICADO
#define LIMITE_36330 36530
#define FACTOR_36330 2

int aplicar_limite36330(int valor) {
    if (valor > LIMITE_36330) return LIMITE_36330;
    return valor * FACTOR_36330;
}
