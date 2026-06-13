// fichero 40738 -- macros y constantes
#define LIMITE_40738 40838
#define FACTOR_40738 4

int aplicar_limite40738(int valor) {
    if (valor > LIMITE_40738) return LIMITE_40738;
    return valor * FACTOR_40738;
}
