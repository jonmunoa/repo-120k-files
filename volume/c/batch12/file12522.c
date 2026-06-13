// fichero 12522 -- macros y constantes
#define LIMITE_12522 12622
#define FACTOR_12522 3

int aplicar_limite12522(int valor) {
    if (valor > LIMITE_12522) return LIMITE_12522;
    return valor * FACTOR_12522;
}
