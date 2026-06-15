// fichero 31538 -- macros y constantes -- MODIFICADO
#define LIMITE_31538 31738
#define FACTOR_31538 5

int aplicar_limite31538(int valor) {
    if (valor > LIMITE_31538) return LIMITE_31538;
    return valor * FACTOR_31538;
}
