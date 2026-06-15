// fichero 25054 -- macros y constantes -- MODIFICADO
#define LIMITE_25054 25254
#define FACTOR_25054 6

int aplicar_limite25054(int valor) {
    if (valor > LIMITE_25054) return LIMITE_25054;
    return valor * FACTOR_25054;
}
