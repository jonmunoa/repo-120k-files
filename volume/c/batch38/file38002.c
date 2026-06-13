// fichero 38002 -- macros y constantes
#define LIMITE_38002 38102
#define FACTOR_38002 3

int aplicar_limite38002(int valor) {
    if (valor > LIMITE_38002) return LIMITE_38002;
    return valor * FACTOR_38002;
}
