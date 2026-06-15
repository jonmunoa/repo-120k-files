// fichero 49558 -- macros y constantes -- MODIFICADO
#define LIMITE_49558 49758
#define FACTOR_49558 5

int aplicar_limite49558(int valor) {
    if (valor > LIMITE_49558) return LIMITE_49558;
    return valor * FACTOR_49558;
}
