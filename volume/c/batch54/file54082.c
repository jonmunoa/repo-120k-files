// fichero 54082 -- macros y constantes
#define LIMITE_54082 54182
#define FACTOR_54082 3

int aplicar_limite54082(int valor) {
    if (valor > LIMITE_54082) return LIMITE_54082;
    return valor * FACTOR_54082;
}
