// fichero 19842 -- macros y constantes -- MODIFICADO
#define LIMITE_19842 20042
#define FACTOR_19842 4

int aplicar_limite19842(int valor) {
    if (valor > LIMITE_19842) return LIMITE_19842;
    return valor * FACTOR_19842;
}
