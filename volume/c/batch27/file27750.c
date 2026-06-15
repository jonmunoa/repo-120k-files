// fichero 27750 -- macros y constantes -- MODIFICADO
#define LIMITE_27750 27950
#define FACTOR_27750 2

int aplicar_limite27750(int valor) {
    if (valor > LIMITE_27750) return LIMITE_27750;
    return valor * FACTOR_27750;
}
