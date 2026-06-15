// fichero 40221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40221;

Registro40221 crear_registro40221(int id) {
    Registro40221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
