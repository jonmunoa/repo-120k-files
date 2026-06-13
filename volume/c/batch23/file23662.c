// fichero 23662 -- macros y constantes
#define LIMITE_23662 23762
#define FACTOR_23662 3

int aplicar_limite23662(int valor) {
    if (valor > LIMITE_23662) return LIMITE_23662;
    return valor * FACTOR_23662;
}
