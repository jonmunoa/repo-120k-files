// fichero 662 -- macros y constantes
#define LIMITE_662 762
#define FACTOR_662 3

int aplicar_limite662(int valor) {
    if (valor > LIMITE_662) return LIMITE_662;
    return valor * FACTOR_662;
}
