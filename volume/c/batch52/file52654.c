// fichero 52654 -- macros y constantes
#define LIMITE_52654 52754
#define FACTOR_52654 5

int aplicar_limite52654(int valor) {
    if (valor > LIMITE_52654) return LIMITE_52654;
    return valor * FACTOR_52654;
}
