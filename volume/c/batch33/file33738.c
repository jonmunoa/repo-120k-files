// fichero 33738 -- macros y constantes
#define LIMITE_33738 33838
#define FACTOR_33738 4

int aplicar_limite33738(int valor) {
    if (valor > LIMITE_33738) return LIMITE_33738;
    return valor * FACTOR_33738;
}
