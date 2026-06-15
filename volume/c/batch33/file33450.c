// fichero 33450 -- macros y constantes -- MODIFICADO
#define LIMITE_33450 33650
#define FACTOR_33450 2

int aplicar_limite33450(int valor) {
    if (valor > LIMITE_33450) return LIMITE_33450;
    return valor * FACTOR_33450;
}
