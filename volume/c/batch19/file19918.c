// fichero 19918 -- macros y constantes
#define LIMITE_19918 20018
#define FACTOR_19918 4

int aplicar_limite19918(int valor) {
    if (valor > LIMITE_19918) return LIMITE_19918;
    return valor * FACTOR_19918;
}
