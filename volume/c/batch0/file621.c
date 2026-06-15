// fichero 621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro621;

Registro621 crear_registro621(int id) {
    Registro621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
