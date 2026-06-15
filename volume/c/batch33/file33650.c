// fichero 33650 -- macros y constantes -- MODIFICADO
#define LIMITE_33650 33850
#define FACTOR_33650 2

int aplicar_limite33650(int valor) {
    if (valor > LIMITE_33650) return LIMITE_33650;
    return valor * FACTOR_33650;
}
