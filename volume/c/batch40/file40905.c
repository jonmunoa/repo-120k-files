// fichero 40905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40905;

Registro40905 crear_registro40905(int id) {
    Registro40905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
