// fichero 40930 -- macros y constantes
#define LIMITE_40930 41030
#define FACTOR_40930 1

int aplicar_limite40930(int valor) {
    if (valor > LIMITE_40930) return LIMITE_40930;
    return valor * FACTOR_40930;
}
