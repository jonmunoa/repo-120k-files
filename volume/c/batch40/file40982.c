// fichero 40982 -- macros y constantes
#define LIMITE_40982 41082
#define FACTOR_40982 3

int aplicar_limite40982(int valor) {
    if (valor > LIMITE_40982) return LIMITE_40982;
    return valor * FACTOR_40982;
}
