// fichero 38978 -- macros y constantes
#define LIMITE_38978 39078
#define FACTOR_38978 4

int aplicar_limite38978(int valor) {
    if (valor > LIMITE_38978) return LIMITE_38978;
    return valor * FACTOR_38978;
}
