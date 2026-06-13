// fichero 52174 -- macros y constantes
#define LIMITE_52174 52274
#define FACTOR_52174 5

int aplicar_limite52174(int valor) {
    if (valor > LIMITE_52174) return LIMITE_52174;
    return valor * FACTOR_52174;
}
