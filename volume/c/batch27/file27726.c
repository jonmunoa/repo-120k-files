// fichero 27726 -- macros y constantes -- MODIFICADO
#define LIMITE_27726 27926
#define FACTOR_27726 3

int aplicar_limite27726(int valor) {
    if (valor > LIMITE_27726) return LIMITE_27726;
    return valor * FACTOR_27726;
}
