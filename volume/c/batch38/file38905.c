// fichero 38905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38905;

Registro38905 crear_registro38905(int id) {
    Registro38905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
