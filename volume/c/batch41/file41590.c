// fichero 41590 -- macros y constantes -- MODIFICADO
#define LIMITE_41590 41790
#define FACTOR_41590 2

int aplicar_limite41590(int valor) {
    if (valor > LIMITE_41590) return LIMITE_41590;
    return valor * FACTOR_41590;
}
