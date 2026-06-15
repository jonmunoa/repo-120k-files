// fichero 4590 -- macros y constantes -- MODIFICADO
#define LIMITE_4590 4790
#define FACTOR_4590 2

int aplicar_limite4590(int valor) {
    if (valor > LIMITE_4590) return LIMITE_4590;
    return valor * FACTOR_4590;
}
