// fichero 20138 -- macros y constantes
#define LIMITE_20138 20238
#define FACTOR_20138 4

int aplicar_limite20138(int valor) {
    if (valor > LIMITE_20138) return LIMITE_20138;
    return valor * FACTOR_20138;
}
