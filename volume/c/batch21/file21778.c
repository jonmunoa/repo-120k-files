// fichero 21778 -- macros y constantes -- MODIFICADO
#define LIMITE_21778 21978
#define FACTOR_21778 5

int aplicar_limite21778(int valor) {
    if (valor > LIMITE_21778) return LIMITE_21778;
    return valor * FACTOR_21778;
}
