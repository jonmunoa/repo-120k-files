// fichero 12981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12981;

Registro12981 crear_registro12981(int id) {
    Registro12981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12981(Registro12981 r) {
    return r.valor + r.id;
}
