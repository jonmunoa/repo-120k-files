// fichero 31962 -- macros y constantes
#define LIMITE_31962 32062
#define FACTOR_31962 3

int aplicar_limite31962(int valor) {
    if (valor > LIMITE_31962) return LIMITE_31962;
    return valor * FACTOR_31962;
}
