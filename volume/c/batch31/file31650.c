// fichero 31650 -- macros y constantes -- MODIFICADO
#define LIMITE_31650 31850
#define FACTOR_31650 2

int aplicar_limite31650(int valor) {
    if (valor > LIMITE_31650) return LIMITE_31650;
    return valor * FACTOR_31650;
}
