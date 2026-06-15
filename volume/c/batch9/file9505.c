// fichero 9505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9505;

Registro9505 crear_registro9505(int id) {
    Registro9505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
