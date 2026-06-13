// fichero 6146 -- macros y constantes
#define LIMITE_6146 6246
#define FACTOR_6146 2

int aplicar_limite6146(int valor) {
    if (valor > LIMITE_6146) return LIMITE_6146;
    return valor * FACTOR_6146;
}
