// fichero 47905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47905;

Registro47905 crear_registro47905(int id) {
    Registro47905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
