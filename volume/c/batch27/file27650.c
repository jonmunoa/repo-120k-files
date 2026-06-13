// fichero 27650 -- macros y constantes
#define LIMITE_27650 27750
#define FACTOR_27650 1

int aplicar_limite27650(int valor) {
    if (valor > LIMITE_27650) return LIMITE_27650;
    return valor * FACTOR_27650;
}
