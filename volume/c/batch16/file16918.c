// fichero 16918 -- macros y constantes
#define LIMITE_16918 17018
#define FACTOR_16918 4

int aplicar_limite16918(int valor) {
    if (valor > LIMITE_16918) return LIMITE_16918;
    return valor * FACTOR_16918;
}
