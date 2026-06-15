// fichero 14841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14841;

Registro14841 crear_registro14841(int id) {
    Registro14841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
