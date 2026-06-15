// fichero 48798 -- macros y constantes -- MODIFICADO
#define LIMITE_48798 48998
#define FACTOR_48798 5

int aplicar_limite48798(int valor) {
    if (valor > LIMITE_48798) return LIMITE_48798;
    return valor * FACTOR_48798;
}
