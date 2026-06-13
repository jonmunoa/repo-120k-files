// fichero 6290 -- macros y constantes
#define LIMITE_6290 6390
#define FACTOR_6290 1

int aplicar_limite6290(int valor) {
    if (valor > LIMITE_6290) return LIMITE_6290;
    return valor * FACTOR_6290;
}
