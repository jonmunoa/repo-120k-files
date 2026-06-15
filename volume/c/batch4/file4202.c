// fichero 4202 -- macros y constantes -- MODIFICADO
#define LIMITE_4202 4402
#define FACTOR_4202 4

int aplicar_limite4202(int valor) {
    if (valor > LIMITE_4202) return LIMITE_4202;
    return valor * FACTOR_4202;
}
