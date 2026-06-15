// fichero 38057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38057;

Registro38057 crear_registro38057(int id) {
    Registro38057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
