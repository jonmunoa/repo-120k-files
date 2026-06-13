// fichero 26150 -- macros y constantes
#define LIMITE_26150 26250
#define FACTOR_26150 1

int aplicar_limite26150(int valor) {
    if (valor > LIMITE_26150) return LIMITE_26150;
    return valor * FACTOR_26150;
}
