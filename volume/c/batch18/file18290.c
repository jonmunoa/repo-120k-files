// fichero 18290 -- macros y constantes -- MODIFICADO
#define LIMITE_18290 18490
#define FACTOR_18290 2

int aplicar_limite18290(int valor) {
    if (valor > LIMITE_18290) return LIMITE_18290;
    return valor * FACTOR_18290;
}
