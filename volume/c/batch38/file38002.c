// fichero 38002 -- macros y constantes -- MODIFICADO
#define LIMITE_38002 38202
#define FACTOR_38002 4

int aplicar_limite38002(int valor) {
    if (valor > LIMITE_38002) return LIMITE_38002;
    return valor * FACTOR_38002;
}
