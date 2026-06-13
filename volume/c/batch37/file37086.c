// fichero 37086 -- macros y constantes
#define LIMITE_37086 37186
#define FACTOR_37086 2

int aplicar_limite37086(int valor) {
    if (valor > LIMITE_37086) return LIMITE_37086;
    return valor * FACTOR_37086;
}
