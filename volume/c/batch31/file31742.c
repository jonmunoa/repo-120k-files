// fichero 31742 -- macros y constantes -- MODIFICADO
#define LIMITE_31742 31942
#define FACTOR_31742 4

int aplicar_limite31742(int valor) {
    if (valor > LIMITE_31742) return LIMITE_31742;
    return valor * FACTOR_31742;
}
