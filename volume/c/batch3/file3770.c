// fichero 3770 -- macros y constantes -- MODIFICADO
#define LIMITE_3770 3970
#define FACTOR_3770 2

int aplicar_limite3770(int valor) {
    if (valor > LIMITE_3770) return LIMITE_3770;
    return valor * FACTOR_3770;
}
