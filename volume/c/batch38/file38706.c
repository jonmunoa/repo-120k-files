// fichero 38706 -- macros y constantes -- MODIFICADO
#define LIMITE_38706 38906
#define FACTOR_38706 3

int aplicar_limite38706(int valor) {
    if (valor > LIMITE_38706) return LIMITE_38706;
    return valor * FACTOR_38706;
}
