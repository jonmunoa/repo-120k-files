// fichero 48794 -- macros y constantes -- MODIFICADO
#define LIMITE_48794 48994
#define FACTOR_48794 6

int aplicar_limite48794(int valor) {
    if (valor > LIMITE_48794) return LIMITE_48794;
    return valor * FACTOR_48794;
}
