// fichero 19690 -- macros y constantes
#define LIMITE_19690 19790
#define FACTOR_19690 1

int aplicar_limite19690(int valor) {
    if (valor > LIMITE_19690) return LIMITE_19690;
    return valor * FACTOR_19690;
}
