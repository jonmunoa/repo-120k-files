// fichero 9509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9509;

Registro9509 crear_registro9509(int id) {
    Registro9509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
