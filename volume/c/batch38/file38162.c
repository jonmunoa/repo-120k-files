// fichero 38162 -- macros y constantes
#define LIMITE_38162 38262
#define FACTOR_38162 3

int aplicar_limite38162(int valor) {
    if (valor > LIMITE_38162) return LIMITE_38162;
    return valor * FACTOR_38162;
}
