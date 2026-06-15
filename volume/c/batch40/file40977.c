// fichero 40977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40977;

Registro40977 crear_registro40977(int id) {
    Registro40977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
