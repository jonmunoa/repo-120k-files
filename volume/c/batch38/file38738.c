// fichero 38738 -- macros y constantes
#define LIMITE_38738 38838
#define FACTOR_38738 4

int aplicar_limite38738(int valor) {
    if (valor > LIMITE_38738) return LIMITE_38738;
    return valor * FACTOR_38738;
}
