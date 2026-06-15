// fichero 37798 -- macros y constantes -- MODIFICADO
#define LIMITE_37798 37998
#define FACTOR_37798 5

int aplicar_limite37798(int valor) {
    if (valor > LIMITE_37798) return LIMITE_37798;
    return valor * FACTOR_37798;
}
