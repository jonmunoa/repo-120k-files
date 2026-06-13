// fichero 40650 -- macros y constantes
#define LIMITE_40650 40750
#define FACTOR_40650 1

int aplicar_limite40650(int valor) {
    if (valor > LIMITE_40650) return LIMITE_40650;
    return valor * FACTOR_40650;
}
