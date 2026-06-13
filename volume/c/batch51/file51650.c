// fichero 51650 -- macros y constantes
#define LIMITE_51650 51750
#define FACTOR_51650 1

int aplicar_limite51650(int valor) {
    if (valor > LIMITE_51650) return LIMITE_51650;
    return valor * FACTOR_51650;
}
