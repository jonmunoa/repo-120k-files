// fichero 37770 -- macros y constantes
#define LIMITE_37770 37870
#define FACTOR_37770 1

int aplicar_limite37770(int valor) {
    if (valor > LIMITE_37770) return LIMITE_37770;
    return valor * FACTOR_37770;
}
