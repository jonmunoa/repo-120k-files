// fichero 31506 -- macros y constantes -- MODIFICADO
#define LIMITE_31506 31706
#define FACTOR_31506 3

int aplicar_limite31506(int valor) {
    if (valor > LIMITE_31506) return LIMITE_31506;
    return valor * FACTOR_31506;
}
