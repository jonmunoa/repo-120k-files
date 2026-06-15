// fichero 41681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41681;

Registro41681 crear_registro41681(int id) {
    Registro41681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
