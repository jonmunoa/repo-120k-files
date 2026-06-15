// fichero 31681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31681;

Registro31681 crear_registro31681(int id) {
    Registro31681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
