// fichero 21905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21905;

Registro21905 crear_registro21905(int id) {
    Registro21905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
