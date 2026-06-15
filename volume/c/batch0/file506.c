// fichero 506 -- macros y constantes -- MODIFICADO
#define LIMITE_506 706
#define FACTOR_506 3

int aplicar_limite506(int valor) {
    if (valor > LIMITE_506) return LIMITE_506;
    return valor * FACTOR_506;
}
