// fichero 31918 -- macros y constantes
#define LIMITE_31918 32018
#define FACTOR_31918 4

int aplicar_limite31918(int valor) {
    if (valor > LIMITE_31918) return LIMITE_31918;
    return valor * FACTOR_31918;
}
