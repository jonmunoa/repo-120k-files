// fichero 38838 -- macros y constantes -- MODIFICADO
#define LIMITE_38838 39038
#define FACTOR_38838 5

int aplicar_limite38838(int valor) {
    if (valor > LIMITE_38838) return LIMITE_38838;
    return valor * FACTOR_38838;
}
