// fichero 51082 -- macros y constantes
#define LIMITE_51082 51182
#define FACTOR_51082 3

int aplicar_limite51082(int valor) {
    if (valor > LIMITE_51082) return LIMITE_51082;
    return valor * FACTOR_51082;
}
