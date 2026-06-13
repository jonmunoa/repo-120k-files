// fichero 41290 -- macros y constantes
#define LIMITE_41290 41390
#define FACTOR_41290 1

int aplicar_limite41290(int valor) {
    if (valor > LIMITE_41290) return LIMITE_41290;
    return valor * FACTOR_41290;
}
