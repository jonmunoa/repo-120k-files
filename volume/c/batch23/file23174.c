// fichero 23174 -- macros y constantes
#define LIMITE_23174 23274
#define FACTOR_23174 5

int aplicar_limite23174(int valor) {
    if (valor > LIMITE_23174) return LIMITE_23174;
    return valor * FACTOR_23174;
}
