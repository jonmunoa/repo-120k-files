// fichero 48770 -- macros y constantes -- MODIFICADO
#define LIMITE_48770 48970
#define FACTOR_48770 2

int aplicar_limite48770(int valor) {
    if (valor > LIMITE_48770) return LIMITE_48770;
    return valor * FACTOR_48770;
}
