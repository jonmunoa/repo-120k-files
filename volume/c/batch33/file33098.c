// fichero 33098 -- macros y constantes -- MODIFICADO
#define LIMITE_33098 33298
#define FACTOR_33098 5

int aplicar_limite33098(int valor) {
    if (valor > LIMITE_33098) return LIMITE_33098;
    return valor * FACTOR_33098;
}
