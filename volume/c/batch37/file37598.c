// fichero 37598 -- macros y constantes -- MODIFICADO
#define LIMITE_37598 37798
#define FACTOR_37598 5

int aplicar_limite37598(int valor) {
    if (valor > LIMITE_37598) return LIMITE_37598;
    return valor * FACTOR_37598;
}
