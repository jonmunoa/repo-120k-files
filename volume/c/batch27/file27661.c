// fichero 27661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27661;

Registro27661 crear_registro27661(int id) {
    Registro27661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
