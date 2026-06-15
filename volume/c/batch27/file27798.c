// fichero 27798 -- macros y constantes -- MODIFICADO
#define LIMITE_27798 27998
#define FACTOR_27798 5

int aplicar_limite27798(int valor) {
    if (valor > LIMITE_27798) return LIMITE_27798;
    return valor * FACTOR_27798;
}
