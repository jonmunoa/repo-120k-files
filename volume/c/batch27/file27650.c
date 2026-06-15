// fichero 27650 -- macros y constantes -- MODIFICADO
#define LIMITE_27650 27850
#define FACTOR_27650 2

int aplicar_limite27650(int valor) {
    if (valor > LIMITE_27650) return LIMITE_27650;
    return valor * FACTOR_27650;
}
