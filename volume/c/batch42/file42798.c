// fichero 42798 -- macros y constantes -- MODIFICADO
#define LIMITE_42798 42998
#define FACTOR_42798 5

int aplicar_limite42798(int valor) {
    if (valor > LIMITE_42798) return LIMITE_42798;
    return valor * FACTOR_42798;
}
