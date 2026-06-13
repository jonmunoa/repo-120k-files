// fichero 53662 -- macros y constantes
#define LIMITE_53662 53762
#define FACTOR_53662 3

int aplicar_limite53662(int valor) {
    if (valor > LIMITE_53662) return LIMITE_53662;
    return valor * FACTOR_53662;
}
