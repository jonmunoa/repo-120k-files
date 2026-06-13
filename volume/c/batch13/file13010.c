// fichero 13010 -- macros y constantes
#define LIMITE_13010 13110
#define FACTOR_13010 1

int aplicar_limite13010(int valor) {
    if (valor > LIMITE_13010) return LIMITE_13010;
    return valor * FACTOR_13010;
}
