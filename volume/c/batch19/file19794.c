// fichero 19794 -- macros y constantes -- MODIFICADO
#define LIMITE_19794 19994
#define FACTOR_19794 6

int aplicar_limite19794(int valor) {
    if (valor > LIMITE_19794) return LIMITE_19794;
    return valor * FACTOR_19794;
}
