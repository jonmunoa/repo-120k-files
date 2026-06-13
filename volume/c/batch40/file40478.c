// fichero 40478 -- macros y constantes
#define LIMITE_40478 40578
#define FACTOR_40478 4

int aplicar_limite40478(int valor) {
    if (valor > LIMITE_40478) return LIMITE_40478;
    return valor * FACTOR_40478;
}
