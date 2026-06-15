// fichero 27670 -- macros y constantes -- MODIFICADO
#define LIMITE_27670 27870
#define FACTOR_27670 2

int aplicar_limite27670(int valor) {
    if (valor > LIMITE_27670) return LIMITE_27670;
    return valor * FACTOR_27670;
}
