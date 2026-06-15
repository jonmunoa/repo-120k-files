// fichero 48330 -- macros y constantes -- MODIFICADO
#define LIMITE_48330 48530
#define FACTOR_48330 2

int aplicar_limite48330(int valor) {
    if (valor > LIMITE_48330) return LIMITE_48330;
    return valor * FACTOR_48330;
}
