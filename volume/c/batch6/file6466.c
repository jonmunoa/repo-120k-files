// fichero 6466 -- macros y constantes -- MODIFICADO
#define LIMITE_6466 6666
#define FACTOR_6466 3

int aplicar_limite6466(int valor) {
    if (valor > LIMITE_6466) return LIMITE_6466;
    return valor * FACTOR_6466;
}
