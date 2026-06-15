// fichero 24706 -- macros y constantes -- MODIFICADO
#define LIMITE_24706 24906
#define FACTOR_24706 3

int aplicar_limite24706(int valor) {
    if (valor > LIMITE_24706) return LIMITE_24706;
    return valor * FACTOR_24706;
}
