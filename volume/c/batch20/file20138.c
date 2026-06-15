// fichero 20138 -- macros y constantes -- MODIFICADO
#define LIMITE_20138 20338
#define FACTOR_20138 5

int aplicar_limite20138(int valor) {
    if (valor > LIMITE_20138) return LIMITE_20138;
    return valor * FACTOR_20138;
}
