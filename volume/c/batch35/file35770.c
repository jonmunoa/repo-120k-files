// fichero 35770 -- macros y constantes -- MODIFICADO
#define LIMITE_35770 35970
#define FACTOR_35770 2

int aplicar_limite35770(int valor) {
    if (valor > LIMITE_35770) return LIMITE_35770;
    return valor * FACTOR_35770;
}
