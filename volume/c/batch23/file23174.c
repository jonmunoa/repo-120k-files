// fichero 23174 -- macros y constantes -- MODIFICADO
#define LIMITE_23174 23374
#define FACTOR_23174 6

int aplicar_limite23174(int valor) {
    if (valor > LIMITE_23174) return LIMITE_23174;
    return valor * FACTOR_23174;
}
