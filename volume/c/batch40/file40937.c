// fichero 40937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40937;

Registro40937 crear_registro40937(int id) {
    Registro40937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40937(Registro40937 r) {
    return r.valor + r.id;
}
