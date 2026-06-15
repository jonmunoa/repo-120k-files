// fichero 770 -- macros y constantes -- MODIFICADO
#define LIMITE_770 970
#define FACTOR_770 2

int aplicar_limite770(int valor) {
    if (valor > LIMITE_770) return LIMITE_770;
    return valor * FACTOR_770;
}
