// fichero 30918 -- macros y constantes
#define LIMITE_30918 31018
#define FACTOR_30918 4

int aplicar_limite30918(int valor) {
    if (valor > LIMITE_30918) return LIMITE_30918;
    return valor * FACTOR_30918;
}
