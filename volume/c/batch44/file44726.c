// fichero 44726 -- macros y constantes -- MODIFICADO
#define LIMITE_44726 44926
#define FACTOR_44726 3

int aplicar_limite44726(int valor) {
    if (valor > LIMITE_44726) return LIMITE_44726;
    return valor * FACTOR_44726;
}
