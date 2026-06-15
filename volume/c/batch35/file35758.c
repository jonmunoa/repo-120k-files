// fichero 35758 -- macros y constantes -- MODIFICADO
#define LIMITE_35758 35958
#define FACTOR_35758 5

int aplicar_limite35758(int valor) {
    if (valor > LIMITE_35758) return LIMITE_35758;
    return valor * FACTOR_35758;
}
