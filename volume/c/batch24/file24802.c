// fichero 24802 -- macros y constantes
#define LIMITE_24802 24902
#define FACTOR_24802 3

int aplicar_limite24802(int valor) {
    if (valor > LIMITE_24802) return LIMITE_24802;
    return valor * FACTOR_24802;
}
