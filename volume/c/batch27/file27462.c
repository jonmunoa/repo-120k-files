// fichero 27462 -- macros y constantes -- MODIFICADO
#define LIMITE_27462 27662
#define FACTOR_27462 4

int aplicar_limite27462(int valor) {
    if (valor > LIMITE_27462) return LIMITE_27462;
    return valor * FACTOR_27462;
}
