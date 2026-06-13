// fichero 35770 -- macros y constantes
#define LIMITE_35770 35870
#define FACTOR_35770 1

int aplicar_limite35770(int valor) {
    if (valor > LIMITE_35770) return LIMITE_35770;
    return valor * FACTOR_35770;
}
