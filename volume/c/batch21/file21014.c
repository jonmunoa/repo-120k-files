// fichero 21014 -- macros y constantes
#define LIMITE_21014 21114
#define FACTOR_21014 5

int aplicar_limite21014(int valor) {
    if (valor > LIMITE_21014) return LIMITE_21014;
    return valor * FACTOR_21014;
}
