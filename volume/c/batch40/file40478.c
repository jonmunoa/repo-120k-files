// fichero 40478 -- macros y constantes -- MODIFICADO
#define LIMITE_40478 40678
#define FACTOR_40478 5

int aplicar_limite40478(int valor) {
    if (valor > LIMITE_40478) return LIMITE_40478;
    return valor * FACTOR_40478;
}
