// fichero 31933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31933;

Registro31933 crear_registro31933(int id) {
    Registro31933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
