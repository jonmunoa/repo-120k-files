// fichero 21770 -- macros y constantes -- MODIFICADO
#define LIMITE_21770 21970
#define FACTOR_21770 2

int aplicar_limite21770(int valor) {
    if (valor > LIMITE_21770) return LIMITE_21770;
    return valor * FACTOR_21770;
}
