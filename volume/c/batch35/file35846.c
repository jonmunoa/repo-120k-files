// fichero 35846 -- macros y constantes -- MODIFICADO
#define LIMITE_35846 36046
#define FACTOR_35846 3

int aplicar_limite35846(int valor) {
    if (valor > LIMITE_35846) return LIMITE_35846;
    return valor * FACTOR_35846;
}
