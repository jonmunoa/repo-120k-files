// fichero 2918 -- macros y constantes
#define LIMITE_2918 3018
#define FACTOR_2918 4

int aplicar_limite2918(int valor) {
    if (valor > LIMITE_2918) return LIMITE_2918;
    return valor * FACTOR_2918;
}
