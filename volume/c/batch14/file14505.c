// fichero 14505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14505;

Registro14505 crear_registro14505(int id) {
    Registro14505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
