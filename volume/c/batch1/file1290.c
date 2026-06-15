// fichero 1290 -- macros y constantes -- MODIFICADO
#define LIMITE_1290 1490
#define FACTOR_1290 2

int aplicar_limite1290(int valor) {
    if (valor > LIMITE_1290) return LIMITE_1290;
    return valor * FACTOR_1290;
}
