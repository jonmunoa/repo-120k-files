// fichero 37770 -- macros y constantes -- MODIFICADO
#define LIMITE_37770 37970
#define FACTOR_37770 2

int aplicar_limite37770(int valor) {
    if (valor > LIMITE_37770) return LIMITE_37770;
    return valor * FACTOR_37770;
}
