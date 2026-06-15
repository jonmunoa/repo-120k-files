// fichero 27218 -- macros y constantes -- MODIFICADO
#define LIMITE_27218 27418
#define FACTOR_27218 5

int aplicar_limite27218(int valor) {
    if (valor > LIMITE_27218) return LIMITE_27218;
    return valor * FACTOR_27218;
}
