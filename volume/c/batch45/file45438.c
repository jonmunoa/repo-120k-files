// fichero 45438 -- macros y constantes -- MODIFICADO
#define LIMITE_45438 45638
#define FACTOR_45438 5

int aplicar_limite45438(int valor) {
    if (valor > LIMITE_45438) return LIMITE_45438;
    return valor * FACTOR_45438;
}
