// fichero 20950 -- macros y constantes
#define LIMITE_20950 21050
#define FACTOR_20950 1

int aplicar_limite20950(int valor) {
    if (valor > LIMITE_20950) return LIMITE_20950;
    return valor * FACTOR_20950;
}
