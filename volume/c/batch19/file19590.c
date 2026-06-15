// fichero 19590 -- macros y constantes -- MODIFICADO
#define LIMITE_19590 19790
#define FACTOR_19590 2

int aplicar_limite19590(int valor) {
    if (valor > LIMITE_19590) return LIMITE_19590;
    return valor * FACTOR_19590;
}
