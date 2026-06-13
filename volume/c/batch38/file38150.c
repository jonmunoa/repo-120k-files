// fichero 38150 -- macros y constantes
#define LIMITE_38150 38250
#define FACTOR_38150 1

int aplicar_limite38150(int valor) {
    if (valor > LIMITE_38150) return LIMITE_38150;
    return valor * FACTOR_38150;
}
