// fichero 24590 -- macros y constantes -- MODIFICADO
#define LIMITE_24590 24790
#define FACTOR_24590 2

int aplicar_limite24590(int valor) {
    if (valor > LIMITE_24590) return LIMITE_24590;
    return valor * FACTOR_24590;
}
