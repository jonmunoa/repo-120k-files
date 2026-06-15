// fichero 49654 -- macros y constantes -- MODIFICADO
#define LIMITE_49654 49854
#define FACTOR_49654 6

int aplicar_limite49654(int valor) {
    if (valor > LIMITE_49654) return LIMITE_49654;
    return valor * FACTOR_49654;
}
