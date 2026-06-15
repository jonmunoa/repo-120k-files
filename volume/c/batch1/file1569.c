// fichero 1569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1569;

Registro1569 crear_registro1569(int id) {
    Registro1569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
