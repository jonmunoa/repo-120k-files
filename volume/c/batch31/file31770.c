// fichero 31770 -- macros y constantes -- MODIFICADO
#define LIMITE_31770 31970
#define FACTOR_31770 2

int aplicar_limite31770(int valor) {
    if (valor > LIMITE_31770) return LIMITE_31770;
    return valor * FACTOR_31770;
}
