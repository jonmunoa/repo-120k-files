// fichero 42174 -- macros y constantes -- MODIFICADO
#define LIMITE_42174 42374
#define FACTOR_42174 6

int aplicar_limite42174(int valor) {
    if (valor > LIMITE_42174) return LIMITE_42174;
    return valor * FACTOR_42174;
}
