// fichero 44590 -- macros y constantes -- MODIFICADO
#define LIMITE_44590 44790
#define FACTOR_44590 2

int aplicar_limite44590(int valor) {
    if (valor > LIMITE_44590) return LIMITE_44590;
    return valor * FACTOR_44590;
}
