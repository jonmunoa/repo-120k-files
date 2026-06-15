// fichero 17642 -- macros y constantes -- MODIFICADO
#define LIMITE_17642 17842
#define FACTOR_17642 4

int aplicar_limite17642(int valor) {
    if (valor > LIMITE_17642) return LIMITE_17642;
    return valor * FACTOR_17642;
}
