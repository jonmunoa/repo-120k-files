// fichero 44674 -- macros y constantes -- MODIFICADO
#define LIMITE_44674 44874
#define FACTOR_44674 6

int aplicar_limite44674(int valor) {
    if (valor > LIMITE_44674) return LIMITE_44674;
    return valor * FACTOR_44674;
}
