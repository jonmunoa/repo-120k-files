// fichero 52898 -- macros y constantes
#define LIMITE_52898 52998
#define FACTOR_52898 4

int aplicar_limite52898(int valor) {
    if (valor > LIMITE_52898) return LIMITE_52898;
    return valor * FACTOR_52898;
}
