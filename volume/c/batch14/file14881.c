// fichero 14881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14881;

Registro14881 crear_registro14881(int id) {
    Registro14881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
