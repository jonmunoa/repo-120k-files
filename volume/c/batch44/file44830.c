// fichero 44830 -- macros y constantes -- MODIFICADO
#define LIMITE_44830 45030
#define FACTOR_44830 2

int aplicar_limite44830(int valor) {
    if (valor > LIMITE_44830) return LIMITE_44830;
    return valor * FACTOR_44830;
}
