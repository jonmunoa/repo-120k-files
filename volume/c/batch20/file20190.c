// fichero 20190 -- macros y constantes
#define LIMITE_20190 20290
#define FACTOR_20190 1

int aplicar_limite20190(int valor) {
    if (valor > LIMITE_20190) return LIMITE_20190;
    return valor * FACTOR_20190;
}
