// fichero 8930 -- macros y constantes
#define LIMITE_8930 9030
#define FACTOR_8930 1

int aplicar_limite8930(int valor) {
    if (valor > LIMITE_8930) return LIMITE_8930;
    return valor * FACTOR_8930;
}
