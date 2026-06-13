// fichero 34901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34901;

Registro34901 crear_registro34901(int id) {
    Registro34901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34901(Registro34901 r) {
    return r.valor + r.id;
}
