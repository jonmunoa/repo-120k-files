// fichero 20150 -- macros y constantes
#define LIMITE_20150 20250
#define FACTOR_20150 1

int aplicar_limite20150(int valor) {
    if (valor > LIMITE_20150) return LIMITE_20150;
    return valor * FACTOR_20150;
}
