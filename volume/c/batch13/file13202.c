// fichero 13202 -- macros y constantes -- MODIFICADO
#define LIMITE_13202 13402
#define FACTOR_13202 4

int aplicar_limite13202(int valor) {
    if (valor > LIMITE_13202) return LIMITE_13202;
    return valor * FACTOR_13202;
}
