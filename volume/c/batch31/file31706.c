// fichero 31706 -- macros y constantes -- MODIFICADO
#define LIMITE_31706 31906
#define FACTOR_31706 3

int aplicar_limite31706(int valor) {
    if (valor > LIMITE_31706) return LIMITE_31706;
    return valor * FACTOR_31706;
}
