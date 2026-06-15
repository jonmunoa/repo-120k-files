// fichero 20838 -- macros y constantes -- MODIFICADO
#define LIMITE_20838 21038
#define FACTOR_20838 5

int aplicar_limite20838(int valor) {
    if (valor > LIMITE_20838) return LIMITE_20838;
    return valor * FACTOR_20838;
}
