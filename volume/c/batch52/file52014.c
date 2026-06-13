// fichero 52014 -- macros y constantes
#define LIMITE_52014 52114
#define FACTOR_52014 5

int aplicar_limite52014(int valor) {
    if (valor > LIMITE_52014) return LIMITE_52014;
    return valor * FACTOR_52014;
}
