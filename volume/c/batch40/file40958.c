// fichero 40958 -- macros y constantes
#define LIMITE_40958 41058
#define FACTOR_40958 4

int aplicar_limite40958(int valor) {
    if (valor > LIMITE_40958) return LIMITE_40958;
    return valor * FACTOR_40958;
}
