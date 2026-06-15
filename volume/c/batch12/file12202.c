// fichero 12202 -- macros y constantes -- MODIFICADO
#define LIMITE_12202 12402
#define FACTOR_12202 4

int aplicar_limite12202(int valor) {
    if (valor > LIMITE_12202) return LIMITE_12202;
    return valor * FACTOR_12202;
}
