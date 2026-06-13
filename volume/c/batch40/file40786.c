// fichero 40786 -- macros y constantes
#define LIMITE_40786 40886
#define FACTOR_40786 2

int aplicar_limite40786(int valor) {
    if (valor > LIMITE_40786) return LIMITE_40786;
    return valor * FACTOR_40786;
}
