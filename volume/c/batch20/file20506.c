// fichero 20506 -- macros y constantes
#define LIMITE_20506 20606
#define FACTOR_20506 2

int aplicar_limite20506(int valor) {
    if (valor > LIMITE_20506) return LIMITE_20506;
    return valor * FACTOR_20506;
}
