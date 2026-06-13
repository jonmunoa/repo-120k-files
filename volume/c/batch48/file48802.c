// fichero 48802 -- macros y constantes
#define LIMITE_48802 48902
#define FACTOR_48802 3

int aplicar_limite48802(int valor) {
    if (valor > LIMITE_48802) return LIMITE_48802;
    return valor * FACTOR_48802;
}
