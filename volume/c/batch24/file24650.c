// fichero 24650 -- macros y constantes
#define LIMITE_24650 24750
#define FACTOR_24650 1

int aplicar_limite24650(int valor) {
    if (valor > LIMITE_24650) return LIMITE_24650;
    return valor * FACTOR_24650;
}
