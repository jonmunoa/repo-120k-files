// fichero 38741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38741;

Registro38741 crear_registro38741(int id) {
    Registro38741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
