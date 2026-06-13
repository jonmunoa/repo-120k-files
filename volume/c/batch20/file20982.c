// fichero 20982 -- macros y constantes
#define LIMITE_20982 21082
#define FACTOR_20982 3

int aplicar_limite20982(int valor) {
    if (valor > LIMITE_20982) return LIMITE_20982;
    return valor * FACTOR_20982;
}
