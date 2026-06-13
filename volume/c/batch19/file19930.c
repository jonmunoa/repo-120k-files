// fichero 19930 -- macros y constantes
#define LIMITE_19930 20030
#define FACTOR_19930 1

int aplicar_limite19930(int valor) {
    if (valor > LIMITE_19930) return LIMITE_19930;
    return valor * FACTOR_19930;
}
