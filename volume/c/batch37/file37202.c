// fichero 37202 -- macros y constantes -- MODIFICADO
#define LIMITE_37202 37402
#define FACTOR_37202 4

int aplicar_limite37202(int valor) {
    if (valor > LIMITE_37202) return LIMITE_37202;
    return valor * FACTOR_37202;
}
