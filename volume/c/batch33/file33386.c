// fichero 33386 -- macros y constantes -- MODIFICADO
#define LIMITE_33386 33586
#define FACTOR_33386 3

int aplicar_limite33386(int valor) {
    if (valor > LIMITE_33386) return LIMITE_33386;
    return valor * FACTOR_33386;
}
