// fichero 40149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40149;

Registro40149 crear_registro40149(int id) {
    Registro40149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40149(Registro40149 r) {
    return r.valor + r.id;
}
