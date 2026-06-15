// fichero 18770 -- macros y constantes -- MODIFICADO
#define LIMITE_18770 18970
#define FACTOR_18770 2

int aplicar_limite18770(int valor) {
    if (valor > LIMITE_18770) return LIMITE_18770;
    return valor * FACTOR_18770;
}
