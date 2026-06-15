// fichero 41838 -- macros y constantes -- MODIFICADO
#define LIMITE_41838 42038
#define FACTOR_41838 5

int aplicar_limite41838(int valor) {
    if (valor > LIMITE_41838) return LIMITE_41838;
    return valor * FACTOR_41838;
}
