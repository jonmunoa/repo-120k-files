// fichero 933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro933;

Registro933 crear_registro933(int id) {
    Registro933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
