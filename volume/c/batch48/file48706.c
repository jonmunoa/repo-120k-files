// fichero 48706 -- macros y constantes
#define LIMITE_48706 48806
#define FACTOR_48706 2

int aplicar_limite48706(int valor) {
    if (valor > LIMITE_48706) return LIMITE_48706;
    return valor * FACTOR_48706;
}
