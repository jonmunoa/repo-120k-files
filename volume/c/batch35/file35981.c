// fichero 35981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35981;

Registro35981 crear_registro35981(int id) {
    Registro35981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35981(Registro35981 r) {
    return r.valor + r.id;
}
