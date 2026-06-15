// fichero 23846 -- macros y constantes -- MODIFICADO
#define LIMITE_23846 24046
#define FACTOR_23846 3

int aplicar_limite23846(int valor) {
    if (valor > LIMITE_23846) return LIMITE_23846;
    return valor * FACTOR_23846;
}
