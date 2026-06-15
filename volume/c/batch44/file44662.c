// fichero 44662 -- macros y constantes -- MODIFICADO
#define LIMITE_44662 44862
#define FACTOR_44662 4

int aplicar_limite44662(int valor) {
    if (valor > LIMITE_44662) return LIMITE_44662;
    return valor * FACTOR_44662;
}
