// fichero 24730 -- macros y constantes
#define LIMITE_24730 24830
#define FACTOR_24730 1

int aplicar_limite24730(int valor) {
    if (valor > LIMITE_24730) return LIMITE_24730;
    return valor * FACTOR_24730;
}
