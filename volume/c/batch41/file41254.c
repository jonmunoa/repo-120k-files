// fichero 41254 -- macros y constantes -- MODIFICADO
#define LIMITE_41254 41454
#define FACTOR_41254 6

int aplicar_limite41254(int valor) {
    if (valor > LIMITE_41254) return LIMITE_41254;
    return valor * FACTOR_41254;
}
