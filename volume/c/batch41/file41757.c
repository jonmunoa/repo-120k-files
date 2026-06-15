// fichero 41757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41757;

Registro41757 crear_registro41757(int id) {
    Registro41757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
