// fichero 27018 -- macros y constantes -- MODIFICADO
#define LIMITE_27018 27218
#define FACTOR_27018 5

int aplicar_limite27018(int valor) {
    if (valor > LIMITE_27018) return LIMITE_27018;
    return valor * FACTOR_27018;
}
