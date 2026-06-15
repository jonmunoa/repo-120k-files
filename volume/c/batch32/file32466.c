// fichero 32466 -- macros y constantes -- MODIFICADO
#define LIMITE_32466 32666
#define FACTOR_32466 3

int aplicar_limite32466(int valor) {
    if (valor > LIMITE_32466) return LIMITE_32466;
    return valor * FACTOR_32466;
}
