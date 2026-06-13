// fichero 47082 -- macros y constantes
#define LIMITE_47082 47182
#define FACTOR_47082 3

int aplicar_limite47082(int valor) {
    if (valor > LIMITE_47082) return LIMITE_47082;
    return valor * FACTOR_47082;
}
