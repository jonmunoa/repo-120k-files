// fichero 44662 -- macros y constantes
#define LIMITE_44662 44762
#define FACTOR_44662 3

int aplicar_limite44662(int valor) {
    if (valor > LIMITE_44662) return LIMITE_44662;
    return valor * FACTOR_44662;
}
