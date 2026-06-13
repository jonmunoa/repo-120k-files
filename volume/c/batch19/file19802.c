// fichero 19802 -- macros y constantes
#define LIMITE_19802 19902
#define FACTOR_19802 3

int aplicar_limite19802(int valor) {
    if (valor > LIMITE_19802) return LIMITE_19802;
    return valor * FACTOR_19802;
}
