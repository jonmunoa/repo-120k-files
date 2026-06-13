// fichero 31650 -- macros y constantes
#define LIMITE_31650 31750
#define FACTOR_31650 1

int aplicar_limite31650(int valor) {
    if (valor > LIMITE_31650) return LIMITE_31650;
    return valor * FACTOR_31650;
}
