// fichero 33850 -- macros y constantes -- MODIFICADO
#define LIMITE_33850 34050
#define FACTOR_33850 2

int aplicar_limite33850(int valor) {
    if (valor > LIMITE_33850) return LIMITE_33850;
    return valor * FACTOR_33850;
}
