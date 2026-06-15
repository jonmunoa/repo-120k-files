// fichero 31386 -- macros y constantes -- MODIFICADO
#define LIMITE_31386 31586
#define FACTOR_31386 3

int aplicar_limite31386(int valor) {
    if (valor > LIMITE_31386) return LIMITE_31386;
    return valor * FACTOR_31386;
}
