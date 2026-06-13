// fichero 42174 -- macros y constantes
#define LIMITE_42174 42274
#define FACTOR_42174 5

int aplicar_limite42174(int valor) {
    if (valor > LIMITE_42174) return LIMITE_42174;
    return valor * FACTOR_42174;
}
