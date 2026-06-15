// fichero 5506 -- macros y constantes -- MODIFICADO
#define LIMITE_5506 5706
#define FACTOR_5506 3

int aplicar_limite5506(int valor) {
    if (valor > LIMITE_5506) return LIMITE_5506;
    return valor * FACTOR_5506;
}
