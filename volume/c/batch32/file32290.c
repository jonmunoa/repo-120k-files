// fichero 32290 -- macros y constantes -- MODIFICADO
#define LIMITE_32290 32490
#define FACTOR_32290 2

int aplicar_limite32290(int valor) {
    if (valor > LIMITE_32290) return LIMITE_32290;
    return valor * FACTOR_32290;
}
