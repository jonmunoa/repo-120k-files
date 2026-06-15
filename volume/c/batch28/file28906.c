// fichero 28906 -- macros y constantes -- MODIFICADO
#define LIMITE_28906 29106
#define FACTOR_28906 3

int aplicar_limite28906(int valor) {
    if (valor > LIMITE_28906) return LIMITE_28906;
    return valor * FACTOR_28906;
}
