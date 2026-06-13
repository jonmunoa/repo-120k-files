// fichero 40082 -- macros y constantes
#define LIMITE_40082 40182
#define FACTOR_40082 3

int aplicar_limite40082(int valor) {
    if (valor > LIMITE_40082) return LIMITE_40082;
    return valor * FACTOR_40082;
}
