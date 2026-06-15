// fichero 44462 -- macros y constantes -- MODIFICADO
#define LIMITE_44462 44662
#define FACTOR_44462 4

int aplicar_limite44462(int valor) {
    if (valor > LIMITE_44462) return LIMITE_44462;
    return valor * FACTOR_44462;
}
