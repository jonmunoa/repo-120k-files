// fichero 40901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40901;

Registro40901 crear_registro40901(int id) {
    Registro40901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40901(Registro40901 r) {
    return r.valor + r.id;
}
