// fichero 33678 -- macros y constantes -- MODIFICADO
#define LIMITE_33678 33878
#define FACTOR_33678 5

int aplicar_limite33678(int valor) {
    if (valor > LIMITE_33678) return LIMITE_33678;
    return valor * FACTOR_33678;
}
