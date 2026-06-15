// fichero 9649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9649;

Registro9649 crear_registro9649(int id) {
    Registro9649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
