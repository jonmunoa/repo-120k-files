// fichero 54650 -- macros y constantes
#define LIMITE_54650 54750
#define FACTOR_54650 1

int aplicar_limite54650(int valor) {
    if (valor > LIMITE_54650) return LIMITE_54650;
    return valor * FACTOR_54650;
}
