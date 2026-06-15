// fichero 19838 -- macros y constantes -- MODIFICADO
#define LIMITE_19838 20038
#define FACTOR_19838 5

int aplicar_limite19838(int valor) {
    if (valor > LIMITE_19838) return LIMITE_19838;
    return valor * FACTOR_19838;
}
