// fichero 17970 -- macros y constantes
#define LIMITE_17970 18070
#define FACTOR_17970 1

int aplicar_limite17970(int valor) {
    if (valor > LIMITE_17970) return LIMITE_17970;
    return valor * FACTOR_17970;
}
